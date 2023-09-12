#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> fall_in_price;
    for(int i=0; i<prices.size()-1; i++){
        int seconds=0;
        for(int j=i+1; j<prices.size(); j++){
            if(prices[i]<=prices[j]){
                seconds++;
            }
            else{
                seconds++;
                break;
            }
        }
        fall_in_price.push_back(seconds);
    }
    fall_in_price.push_back(0);
    vector<int> answer=fall_in_price;
    return answer;
}
