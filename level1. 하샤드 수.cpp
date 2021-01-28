#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int division=10000;
    int num=x;
    int sum=0;
    while(num!=0){
        int digit=num/division;
        sum+=digit;
        num -= digit*division;
        division/=10;
    }

    bool answer;
    if(x%sum==0){
        answer=true;
    }
    else{
        answer=false;
    }
    return answer;
}
