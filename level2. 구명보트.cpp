#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end(), greater<int>());

    int idx = people.size()-1;
    for(int i=0; i<people.size(); i++){
        if(i == idx){
            answer++;
            break;
        }

        else if(i>idx){
           break;
        }

        else{
            int sum = people[i]+people[idx];
            if(limit >= sum){
                idx--;
                answer++;
            }
            else{
                answer++;
            }
        }

    }
    return answer;
}
