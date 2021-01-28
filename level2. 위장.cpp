#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    vector<string> clothes_type;//옷 종류가 몇 종류인지 알기 위한 벡터 설정
    for(int i=0; i<clothes.size(); i++){//옷 종류 벡터에 옷 종류들만 입력한다
        clothes_type.push_back(clothes[i][1]);
    }
    sort(clothes_type.begin(), clothes_type.end());
    //옷 종류 벡터를 정렬하여 앞과 뒤를 비교하며 종류별로 옷이 몇개 있는지 파악한다
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
    //만약 옷 종류가 한 가지라면 경우의 수는 그 옷 종류의 옷 갯수가 된다
    //한 가지가 아니라면 확률적으로 생각해보자. 왼쪽 예로 들자면
    //얼굴 : 안경, 선글라스, x
    //상의 : 티셔츠, x
    //하의 : 청바지, x
    //겉옷 : 코트, x
    //3C1*2C1*2C1*2C1-1(1을 빼주는 이유는 아무것도 안 입을수는 없기 때문)
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
