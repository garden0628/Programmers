#include <string>
#include <vector>

using namespace std;

vector<int> countdays(vector<int> progresses, vector<int> speeds) {
    vector<int> days;
    for(int i=0; i<progresses.size(); i++){
        int remain=100-progresses[i];
        if(remain%speeds[i]==0){
            days.push_back(remain/speeds[i]);
        }
        else{
            days.push_back((remain/speeds[i])+1);
        }
    }
    return days;
}

vector<int> deployment(vector<int> days) {
    vector<int> deployment_arr;
    int count=0;
    int max=days[0];
    for(int i=0; i<days.size(); i++){
        if(days[i]<=max){
            count++;
        }
        else{
            deployment_arr.push_back(count);
            max=days[i];
            count=1;
        }
    }
    deployment_arr.push_back(count);
    return deployment_arr;
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> days = countdays(progresses, speeds);
    vector<int> answer= deployment(days);
    return answer;
}
