#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int turn = commands.size();
    for(int i=0; i<turn; i++){
        vector<int> keep;
        for(int j=commands[i][0]-1; j<commands[i][1]; j++){
            keep.push_back(array[j]);
        }
        sort(keep.begin(), keep.end());
        answer.push_back(keep[commands[i][2]-1]);
        //answer[i]= keep[commands[i][2]-1];
    }
    return answer;
}
