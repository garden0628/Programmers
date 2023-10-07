#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    vector<string> str;
    string str_num;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            str_num.push_back(s[i]);
        }
        else{
            str.push_back(str_num);
            str_num.clear();
        }
    }
    str.push_back(str_num);

    vector<int> number;
    for(int i=0; i<str.size(); i++){
        int multiple=1;
        int num=0;
        for(int j=str[i].size()-1; j>=0; j--){
            if(str[i][j]=='-'){
                int minus=-1;
                num*=-1;

            }
            else{
                num+=(str[i][j]-48)*multiple;
                multiple*=10;
            }
        }
        number.push_back(num);
    }

    int max_idx=0;
    int min_idx=0;
    int max=number[0];
    int min=number[0];
    for(int i=0; i<number.size(); i++){
        if(max<number[i]){
            max=number[i];
            max_idx=i;
        }
    }
    for(int i=0; i<number.size(); i++){
        if(min>number[i]){
            min=number[i];
            min_idx=i;
        }
    }

    string answer;
    for(int i=0; i<str[min_idx].size(); i++){
        answer.push_back(str[min_idx][i]);
    }
    answer.push_back(' ');
    for(int i=0; i<str[max_idx].size(); i++){
        answer.push_back(str[max_idx][i]);
    }
    return answer;
}
