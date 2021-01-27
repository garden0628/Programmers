#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer;
    sort(phone_book.begin(), phone_book.end());
    for(int i=0; i<phone_book.size()-1; i++){
        int len = phone_book[i].size();
        for(int j=i+1; j<phone_book.size(); j++){
            string num;
            for(int k=0; k<len; k++){
                num.push_back(phone_book[j][k]);
            }
            if(phone_book[i]==num){
                answer = false;
                return answer;
            }
        }
    }
    answer=true;
    return answer;
}
