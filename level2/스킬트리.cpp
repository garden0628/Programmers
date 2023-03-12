#include <string>
#include <vector>

using namespace std;

bool check_skill(string skill, string skill_trees) {
    int count1 = 0; // skill에 있는 문자가 skill_trees에 있다면 count1을 세어준다.
    int idx = skill_trees.size();
    //skill의 뒤에서부터 skill_trees와 대조한다.
    //존재한다면 idx에 존재했던 위치를 저장한다.
    //다음으로 대조하는 skill과 skill_trees가 일치하는 위치가 idx보다 뒤라면 false
    for(int i=skill.size()-1; i>=0; i--){
        int count2=0;
        for(int j=0; j<skill_trees.size(); j++){
            if(skill[i] == skill_trees[j]){
                count1++;
                if(j>=idx){
                    return false;
                }
                idx = j;
                continue;
            }
            //count2를 세어주는 이유는 skill"CBD", skill_trees"BDA"같은 경우에 대응하기 위해
            else{
                count2++;
            }
        }
        //만약 count1이 0이 아니고(skill의 뒷부분에서 skill_trees와 일치하는 부분이 있다)
        //그리고 count2가 skill_trees.size()와 같다면
        //skill의 앞부분이 skill_trees에 없다는 의미이므로 false.
        if(count1 != 0 && count2 == skill_trees.size()){
            return false;
        }
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0; i<skill_trees.size(); i++){
        //check_skill 함수(스킬트리를 확인하는 함수)가 맞다면 answer++
        if(check_skill(skill, skill_trees[i])){
            answer++;
        }
    }
    return answer;
}
