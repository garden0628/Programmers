#include <string>
#include <vector>

using namespace std;

string erase_zero(string s) {
    for(string::iterator i=s.begin(); i<s.end(); i++){
        if(*i=='0'){
            s.erase(i);
            i--;
        }
    }
    return s;
}

int count_zero(string s) {
    int count =0;
    for(string::iterator i=s.begin(); i<s.end(); i++){
        if(*i=='0'){
            count++;
        }
    }
    return count;
}

string binary_number(int len) {
    string s;
    while(len != 1){
        s.push_back(len%2+48);
        len /= 2;
    }
    s.push_back(len);
    return s;
}

vector<int> solution(string s) {
    int len=s.size();
    int zero_count = 0;
    int binary_count =0;
    while(len!=1){
        binary_count++;
        zero_count += count_zero(s);
        s = erase_zero(s);
        len = s.size();
        s = binary_number(len);
    }

    vector<int> answer;
    answer.push_back(binary_count);
    answer.push_back(zero_count);
    return answer;
}
