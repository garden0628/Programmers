#include <vector>
#include <string>
using namespace std;

/*int fibo(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}*/ //시간초과

int fibo(int n)
{
    int prev=0, cur=1, sum=0;
    if(n==1){
        return cur;
    }
    else{
        for(int k=2; k<=n; k++){
            sum=(prev+cur)%1234567; //피보나치 수열 40몇번만 넘어가도 int형 변수를 넘어간다.
            //아주 큰 숫자의 수열에 대해서는 1234567의 나머지를 계속 더한다.
            //(a+b)%c = ((a%c)+(b%c))%c를 활용
            prev=cur;
            cur=sum;
        }
        return sum;
    }
}

int solution(int n)
{
    int answer=fibo(n)%1234567;
    return answer;
}
