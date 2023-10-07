#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int area = brown + yellow;
    int length, width;
    //다양한 방법으로 생각할 수 있다
    //이 코드에서 쓴 방법은 가로*세로 = brown+yellow, 둘레의 길이 = brown를 사용
    //다른 방법으로는 (가로-2)*(세로-2)=yellow로 해도 될듯
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
