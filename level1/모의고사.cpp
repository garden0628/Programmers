#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> stu1={1, 2, 3, 4, 5};
    vector<int> stu2={2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> stu3={3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> count_ans;
    count_ans.assign(3, 0);

    for(int i=0; i<answers.size(); i++){
        if(answers[i]==stu1[i%stu1.size()]){
            count_ans[0]++;
        }
        if(answers[i]==stu2[i%stu2.size()]){
            count_ans[1]++;
        }
        if(answers[i]==stu3[i%stu3.size()]){
            count_ans[2]++;
        }
    }

    int max=-1;
    for(int i=0; i<3; i++){
        if(count_ans[i]>max){
            max=count_ans[i];
        }
    }

    vector<int> answer;
    for(int i=0; i<3; i++){
        if(max==count_ans[i]){
            answer.push_back(i+1);
        }
    }
    return answer;
}
