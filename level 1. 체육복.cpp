#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<int>::iterator i;
    vector<int>::iterator j;
    for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j){
                lost.erase(i);
                reserve.erase(j);
                i--;
                j--;
            }
        }
    }//greedy������ �Ҿ���� �л��� �ڽ��� �������� ���Դٸ� ������ �ڽ��� �Դ´�.

    for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j-1 || *i==*j+1){
                lost.erase(i);
                reserve.erase(j);
                i--;
                j--;
            }
        }
    }

    int answer=n-lost.size();
    /*n               :18
    lost           :[7,8,11,12]
    reserve    : [1,6,8,10]
    ���� �ڵ��� ��, �ռ� �Ȱ��� �͵��� ��� �������Ƿ� lost�� reserve�� �����ִ� ������
    lost    : [7, 11, 12]
    reserve : [1, 6, 10]
    lost�� 7�� reserve�� 6�� �������鼭 11�� �ڿ����� lost vector�� begin���� ���鼭 11�� ������ ���ϰ� �ٷ� 12�� �Ѿ��.
    ��ó�� ���������� ������ ��찡 �մ� ��� ���� �� �� �����Ƿ�, ������ �� �ִ� ���� ã�� ��� lost�� reserve ���� ����� ���ٴ� 0���� ��ü�ϱ�� �ߴ�.*/

    /*for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j-1 || *i==*j+1){
                *i=0;
                *j=0;
            }
        }
    }

    int count=0;//0�� �ƴ� ���� ����.
    for(i=lost.begin(); i<lost.end(); i++){
        if(*i!=0){
            count++;
        }
    }

    int answer=n-count;*/
    cout<<answer<<endl;

    return 0;
}
//���������� erase�� ���ؼ� ��ĭ �Ѿ�� ������ �ٽ� i,j�� ��ĭ �ڷ� �Ѱ��ִ°ɷ� ������ �ߴ�.
