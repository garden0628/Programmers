#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    vector<string> clothes_type;//�� ������ �� �������� �˱� ���� ���� ����
    for(int i=0; i<clothes.size(); i++){//�� ���� ���Ϳ� �� �����鸸 �Է��Ѵ�
        clothes_type.push_back(clothes[i][1]);
    }
    sort(clothes_type.begin(), clothes_type.end());
    //�� ���� ���͸� �����Ͽ� �հ� �ڸ� ���ϸ� �������� ���� � �ִ��� �ľ��Ѵ�
    int count=1;
    vector<int> numOfType;
    for(int i=0; i<clothes_type.size()-1; i++){
        if(clothes_type[i]==clothes_type[i+1]){
            count++;
        }
        else{
            numOfType.push_back(count);
            count=1;
        }
    }
    numOfType.push_back(count);
    //���� �� ������ �� ������� ����� ���� �� �� ������ �� ������ �ȴ�
    //�� ������ �ƴ϶�� Ȯ�������� �����غ���. ���� ���� ���ڸ�
    //�� : �Ȱ�, ���۶�, x
    //���� : Ƽ����, x
    //���� : û����, x
    //�ѿ� : ��Ʈ, x
    //3C1*2C1*2C1*2C1-1(1�� ���ִ� ������ �ƹ��͵� �� �������� ���� ����)
    int answer=1;
    if(numOfType.size()==1){
        answer = numOfType[0];
    }
    else{
        for(int i=0; i<numOfType.size(); i++){
            answer*=(numOfType[i]+1);
        }
        answer = answer-1;
    }
    return answer;
}
