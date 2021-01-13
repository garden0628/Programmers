#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int>::iterator i;
    for(i=arr.begin(); i<arr.end(); i++){
        if((*i%divisor)!=0){
            arr.erase(i);
            i--;
        }
    }
    if(arr.size()==0){
        arr.push_back(-1);
    }
    sort(arr.begin(), arr.end());
    vector<int> answer=arr;
    return answer;
}
