#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int length = numbers.size();
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            int num=numbers[i]+numbers[j];
            if(answer.size()!=0){
                int com_count=0;
                for(int k=0; k<answer.size(); k++){
                    if(num==answer[k]){
                        break;
                    }
                    com_count++;
                }
                if(com_count==answer.size()){
                    answer.push_back(num);
                }
            }
            else{
                answer.push_back(num);
            }
        }
    }

    sort(answer.begin(), answer.end());
    return answer;
}
