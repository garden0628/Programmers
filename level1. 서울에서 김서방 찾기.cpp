//for�� ���
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    string name="Kim";
    int idx;
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i]==name){
            idx=i;
        }
    }
    string answer="�輭���� "+to_string(idx)+"�� �ִ�";
    return answer;
}

//find �˰��� ���
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer;
    int idx=find(seoul.begin(), seoul.end(), "Kim")-seoul.begin();
    answer="�輭���� "+to_string(idx)+"�� �ִ�";
    return answer;
}
