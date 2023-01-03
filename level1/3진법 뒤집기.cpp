#include <iostream>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> ternary;
    while(n!=0){
        ternary.push_back(n%3);
        n/=3;
    }//3진법을 구한 뒤 뒤집을 계획이라면 애초에 나머지를 앞에서부터 벡터에 저장하면 된다.
    int answer = 0;
    int multiple=1;
    for(int i=ternary.size()-1; i>=0; i--){
        answer+=ternary[i]*multiple;
        multiple*=3;
    }
    return answer;
}
