#include <string>
#include <vector>

using namespace std;
//���ο���� ������ �������ų� ���ο���� �������� �۾����� �����ϴ� ���ڰ� h-index�� �ȴ�
int solution(vector<int> citations) {
    int h_index=0;
    for(int i=0; i<citations.size()+1; i++){//���ο���� �������� Ŀ���� ���� ���������� �ʾƵ� �ȴ�. �׷��� ���ο���� 0������ citations.size()+1���� �������ָ� �ȴ�. ������ ������ ������ ���ο���� 6�� ������ 6�̻��� �� �� ����. ��ü �� ���� 5���̱� ������. �׷��� ���� ��쿡�� �ִ��� ���� �� 5���� ���ο���� ��� 5�̻��� ���̴�.
        int count=0;
        for(int j=0; j<citations.size(); j++){
            if(citations[j]>=i){//i�� ���ο����� ���� ��, �ϳ��ϳ��� ���� ���ο������ ũ�ų� ���� �� �ϳ��� ī��Ʈ ���ش�.
                count++;
            }
        }
        if(count>=i){//ī��Ʈ �� ���� ���ο������ ũ�ų� ������ h_index�� �Ѱ��ش�. ���߿� �ᱹ���� h_index�� �ִ밪�� ����� ���̴�.
            h_index=i;
        }
    }
    int answer=h_index; //���࿡ h_index ���� ���ٸ� 0�� ��µ� ���̴�.
    return answer;
}
