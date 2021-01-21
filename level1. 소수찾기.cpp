#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> num;
    for(int i=0; i<=n; i++){
        num.push_back(i);
    }
    num[1]=0;0

    for(int i=2; i*i<=n; i++){
        if(num[i]!=0){
            for(int j=i*i; j<=n; j+=i){
                num[j]=0;
            }
        }
    }//에라토스테네스의 체

    int answer=0;
    for(int i=0; i<=n; i++){
        if(num[i]!=0){
            answer++;
        }
    }
    return answer;
}
