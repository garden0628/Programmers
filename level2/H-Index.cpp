#include <string>
#include <vector>

using namespace std;
//피인용수가 논문수와 같아지거나 피인용수가 논문수보다 작아지기 시작하는 숫자가 h-index가 된다
int solution(vector<int> citations) {
    int h_index=0;
    for(int i=0; i<citations.size()+1; i++){//피인용수가 논문수보다 커지는 경우는 생각해주지 않아도 된다. 그래서 피인용수가 0번부터 citations.size()+1까지 생각해주면 된다. 오른쪽 예에서 보듯이 피인용수가 6인 논문수는 6이상이 될 수 없다. 전체 논문 수가 5개이기 때문에. 그래서 옆의 경우에서 최대인 경우는 논문 5개의 피인용수가 모두 5이상일 때이다.
        int count=0;
        for(int j=0; j<citations.size(); j++){
            if(citations[j]>=i){//i를 피인용수라고 했을 때, 하나하나의 논문이 피인용수보다 크거나 같을 때 하나씩 카운트 해준다.
                count++;
            }
        }
        if(count>=i){//카운트 한 것이 피인용수보다 크거나 같으면 h_index로 넘겨준다. 나중에 결국에는 h_index에 최대값이 저장될 것이다.
            h_index=i;
        }
    }
    int answer=h_index; //만약에 h_index 값이 없다면 0이 출력될 것이다.
    return answer;
}
