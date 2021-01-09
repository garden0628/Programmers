#include <vector>
#include <string>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    /*vector<int>::iterator i;
    for(i=arr.begin(); i<arr.end()-1; i++){//end()가 마지막의 다음을 가리키므로 <와 -1을 두번해줘야한다.
        if(*i==*(i+1)){
            arr.erase(i);
            i--;
        }
    }
    answer=arr;
    return answer; 결과는 모두 맞지만 시간 초과!!!
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
