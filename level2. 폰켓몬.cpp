#include <vector>
using namespace std;

int numOfType(vector<int> nums) {
    int count=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != -1){
            count++;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums[j]=-1;
                }
            }
        }
    }
    return count;
}

int solution(vector<int> nums)
{
    int count = numOfType(nums); //nums��� vector�ȿ� ��� ������ ���� �ִ��� �ľ��Ѵ�.
    int answer;

    int pick = nums.size()/2;
    if(pick>=count){
        answer=count;
    }
    else{
        answer=pick;
    }
    return answer;
}
