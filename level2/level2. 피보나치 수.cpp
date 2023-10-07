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
}*/ //�ð��ʰ�

int fibo(int n)
{
    int prev=0, cur=1, sum=0;
    if(n==1){
        return cur;
    }
    else{
        for(int k=2; k<=n; k++){
            sum=(prev+cur)%1234567; //�Ǻ���ġ ���� 40����� �Ѿ�� int�� ������ �Ѿ��.
            //���� ū ������ ������ ���ؼ��� 1234567�� �������� ��� ���Ѵ�.
            //(a+b)%c = ((a%c)+(b%c))%c�� Ȱ��
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
