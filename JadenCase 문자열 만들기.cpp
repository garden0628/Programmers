#include <string>
#include <vector>

using namespace std;

string JadenCase(string word) {
    if(word[0]>=48 && word[0]<=57){ //������ �� ���� ������ ���
        for(int i=1; i<word.size(); i++){ //�� ���� �����ϰ� ��� �ҹ����̿��� �ϹǷ�
            if(word[i]>=65 && word[i]<=90){
                word[i] = word[i]+32;
            }
        }
    }

    else if(word[0]>=65 && word[0]<=90){ //������ �� ���� �̹� �빮���� ���
        for(int i=1; i<word.size(); i++){ //�� ���� �����ϰ� ��� �ҹ����̿��� �ϹǷ�
            if(word[i]>=65 && word[i]<=90){
                word[i] = word[i]+32;
            }
        }
    }

    else{ //������ �� ���� �ҹ����� ���
        word[0]= word[0]-32;
        for(int i=1; i<word.size(); i++){ //�� ���� �����ϰ� ��� �ҹ����̿��� �ϹǷ�
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
//toupper, tolower �Լ��� ���°� �ξ� ���� �� ����
