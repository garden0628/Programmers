#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int count=1;
    while(count<=n){
        if(count%2==1){
            answer+="��";
            count++;
        }
        else{
            answer+="��";
            count++;
        }
    }
    return answer;
}
