#include <iostream>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> ternary;
    while(n!=0){
        ternary.push_back(n%3);
        n/=3;
    }//3������ ���� �� ������ ��ȹ�̶�� ���ʿ� �������� �տ������� ���Ϳ� �����ϸ� �ȴ�.
    int answer = 0;
    int multiple=1;
    for(int i=ternary.size()-1; i>=0; i--){
        answer+=ternary[i]*multiple;
        multiple*=3;
    }
    return answer;
}
