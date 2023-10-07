#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int area = brown + yellow;
    int length, width;
    //�پ��� ������� ������ �� �ִ�
    //�� �ڵ忡�� �� ����� ����*���� = brown+yellow, �ѷ��� ���� = brown�� ���
    //�ٸ� ������δ� (����-2)*(����-2)=yellow�� �ص� �ɵ�
    for(int i=1; i*i<=area; i++){
        if(area%i==0){
            width=i;
            length=area/i;
        }
        if((width+length)*2-4==brown){
            break;
        }
    }

    vector<int> answer;
    answer.push_back(length);
    answer.push_back(width);
    return answer;
}
