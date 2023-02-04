#include <string>
#include <vector>

using namespace std;

int LeastCommonMultiple(int small, int big) {
    int plus = big;
    while(1){
        if(big%small == 0){
            return big;
        }
        big += plus;
    }
}

int solution(vector<int> arr) {
    int lcm = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(lcm > arr[i]){
            lcm = LeastCommonMultiple(arr[i], lcm);
        }
        else{
            lcm = LeastCommonMultiple(lcm, arr[i]);
        }
    }

    return lcm;
}
