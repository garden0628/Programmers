#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer;
    stack<int> stack;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            stack.push(s[i]);
        }
        else{
            if(stack.empty()){
                answer = false;
                return answer;
            }
            else{
                stack.pop();
            }
        }
    }

    if(stack.size()==0){
        answer=true;
    }
    else{
        answer=false;
    }

    return answer;
}
