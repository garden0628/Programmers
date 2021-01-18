#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    for(int i=1; i<words.size(); i++){
        if(words[i-1][words[i-1].size()-1]!=words[i][0]){
            if((i+1)%n==0){
                answer.push_back(n);
                answer.push_back((i+1)/n);
            }
            else{
                answer.push_back((i+1)%n);
                answer.push_back(((i+1)/n)+1);
            }
        }
        if(answer.size()!=0){
                break;
        }
        for(int j=0; j<i; j++){
            if(words[i]==words[j]){
                if((i+1)%n==0){
                    answer.push_back(n);
                    answer.push_back((i+1)/n);
                }
                else{
                    answer.push_back((i+1)%n);
                    answer.push_back(((i+1)/n)+1);
                }
            }
        }
        if(answer.size()!=0){
            break;
        }
    }

    if(answer.size()==0){
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}
