#include <iostream>

using namespace std;

int findsequence(int n, int a, int b) {
    int count = 0;
    //a�� b�� ���� ����ǥ�� �ݴ��� �ִ� ���
    if((a <= n/2) && (b > n/2)){
        while(n!=1){
            count++;
            n /= 2;
        }
        return count;
    }
    //a�� b�� ���� ����ǥ�� ���ʿ� �ִ� ���
    //�ݴ��� ����ǥ�� ����� �ٽ� �Լ��� �־��ش� (����Լ�)
    else{
        if(a <= n/2){
            return findsequence(n/2, a, b);
        }
        else{
            return findsequence(n/2, a-n/2, b-n/2);
        }
    }
}

int solution(int n, int a, int b)
{
    //a�� b�� ������ b�� �� ũ���� �����ϰڴ�
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }

    int answer = findsequence(n, a, b);
    return answer;
}
