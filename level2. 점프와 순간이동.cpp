#include <iostream>
using namespace std;

int solution(int n)
{
    int count = 1; //�����ϴ� Ƚ��
    while(n != 1){
        if(n%2==0){
            n /= 2;
        }
        else{
            n--;
            count++;
        }
    }

    int ans=count;
    return ans;
}
