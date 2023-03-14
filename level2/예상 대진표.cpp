#include <iostream>

using namespace std;

int findsequence(int n, int a, int b) {
    int count = 0;
    //a와 b가 각각 대진표의 반대편에 있는 경우
    if((a <= n/2) && (b > n/2)){
        while(n!=1){
            count++;
            n /= 2;
        }
        return count;
    }
    //a와 b가 각각 대진표의 한쪽에 있는 경우
    //반대편 대진표를 지우고 다시 함수에 넣어준다 (재귀함수)
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
    //a와 b중 무조건 b가 더 크도록 설정하겠다
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }

    int answer = findsequence(n, a, b);
    return answer;
}
