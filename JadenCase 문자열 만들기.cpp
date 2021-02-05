#include <string>
#include <vector>

using namespace std;

string JadenCase(string word) {
    if(word[0]>=48 && word[0]<=57){ //글자의 맨 앞이 숫자인 경우
        for(int i=1; i<word.size(); i++){ //맨 앞을 제외하곤 모두 소문자이여야 하므로
            if(word[i]>=65 && word[i]<=90){
                word[i] = word[i]+32;
            }
        }
    }

    else if(word[0]>=65 && word[0]<=90){ //글자의 맨 앞이 이미 대문자인 경우
        for(int i=1; i<word.size(); i++){ //맨 앞을 제외하곤 모두 소문자이여야 하므로
            if(word[i]>=65 && word[i]<=90){
                word[i] = word[i]+32;
            }
        }
    }

    else{ //글자의 맨 앞이 소문자인 경우
        word[0]= word[0]-32;
        for(int i=1; i<word.size(); i++){ //맨 앞을 제외하곤 모두 소문자이여야 하므로
            if(word[i]>=65 && word[i]<=90){
                word[i] = word[i]+32;
            }
        }
    }

    return word;
}

string solution(string s) {
    string word;
    string answer = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            word.push_back(s[i]);
        }
        else{
            word = JadenCase(word);
            for(int j=0; j<word.size(); j++){
                answer.push_back(word[j]);
            }
            answer.push_back(' ');
            word="";
        }
    }

    word = JadenCase(word);
    for(int j=0; j<word.size(); j++){
        answer.push_back(word[j]);
    }
    return answer;
}
//toupper, tolower 함수를 쓰는게 훨씬 편할 거 같다
