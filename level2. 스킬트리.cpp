#include <string>
#include <vector>

using namespace std;

bool check_skill(string skill, string skill_trees) {
    int count1 = 0; // skill�� �ִ� ���ڰ� skill_trees�� �ִٸ� count1�� �����ش�.
    int idx = skill_trees.size();
    //skill�� �ڿ������� skill_trees�� �����Ѵ�.
    //�����Ѵٸ� idx�� �����ߴ� ��ġ�� �����Ѵ�.
    //�������� �����ϴ� skill�� skill_trees�� ��ġ�ϴ� ��ġ�� idx���� �ڶ�� false
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
            //count2�� �����ִ� ������ skill"CBD", skill_trees"BDA"���� ��쿡 �����ϱ� ����
            else{
                count2++;
            }
        }
        //���� count1�� 0�� �ƴϰ�(skill�� �޺κп��� skill_trees�� ��ġ�ϴ� �κ��� �ִ�)
        //�׸��� count2�� skill_trees.size()�� ���ٸ�
        //skill�� �պκ��� skill_trees�� ���ٴ� �ǹ��̹Ƿ� false.
        if(count1 != 0 && count2 == skill_trees.size()){
            return false;
        }
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0; i<skill_trees.size(); i++){
        //check_skill �Լ�(��ųƮ���� Ȯ���ϴ� �Լ�)�� �´ٸ� answer++
        if(check_skill(skill, skill_trees[i])){
            answer++;
        }
    }
    return answer;
}
