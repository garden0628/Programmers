#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer;
    int len = s.size();
    if(len%2==0){
        for(int i=len/2-1; i<=len/2; i++){
            answer.push_back(s[i]);
        }
    }
    else{
        answer.push_back(s[len/2]);
    }
    return answer;
}
