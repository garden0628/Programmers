#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(st.empty() == 1){
            st.push(s[i]);
        }
        else{
            if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }

    int answer;
    if(st.size()==0){
        answer=1;
    }
    else{
        answer=0;
    }
    return answer;
}
