#include <string>
#include <vector>

using namespace std;

int numOfbinary_one(int n)
{
    int count=0;
    while(n!=0){
        if(n%2!=0){
            count++;
        }
        n/=2;
    }
    return count;
}

int solution(int n) {
    int n_numOfOne = numOfbinary_one(n);
    int num = n+1;
    while(num>n){
        int num_numOfOne = numOfbinary_one(num);
        if(n_numOfOne==num_numOfOne){
            break;
        }
        else{
            num++;
        }
    }
    int answer = num;
    return answer;
}
