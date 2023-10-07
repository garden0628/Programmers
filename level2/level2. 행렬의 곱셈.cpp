#include <string>
#include <vector>

using namespace std;

int multiple(vector<int> new_arr1, vector<vector<int>> arr2, int idx) {
    int num=0;
    for(int i=0; i<new_arr1.size(); i++){
        num += (new_arr1[i] * arr2[i][idx]);
    }
    return num;
}

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size(); i++){
        vector<int> number;
        for(int j=0; j<arr2[0].size(); j++){
            number.push_back(multiple(arr1[i], arr2, j));
        }
        answer.push_back(number);
    }
    return answer;
}
