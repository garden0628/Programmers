#include <vector>
#include <string>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    /*vector<int>::iterator i;
    for(i=arr.begin(); i<arr.end()-1; i++){//end()�� �������� ������ ����Ű�Ƿ� <�� -1�� �ι�������Ѵ�.
        if(*i==*(i+1)){
            arr.erase(i);
            i--;
        }
    }
    answer=arr;
    return answer; ����� ��� ������ �ð� �ʰ�!!!
    */

    int len=arr.size();
    answer.push_back(arr[0]);
    for(int i=0; i<len-1; i++){
        if(arr[i]!=arr[i+1]){
            answer.push_back(arr[i+1]);
        }
    }
    return answer;
}
