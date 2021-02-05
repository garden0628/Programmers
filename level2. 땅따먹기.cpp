#include <iostream>
#include <vector>
using namespace std;

void find_num(vector<int> land, int* max, int* max_idx, int* second_max)
{
    for(int i=0; i<4; i++){
        if(land[i]>*max){
            *max = land[i];
            *max_idx = i;
        }
    }
    land[*max_idx]=0;
    for(int i=0; i<4; i++){
        if(land[i]>*second_max){
            *second_max = land[i];
        }
    }
}

int solution(vector<vector<int>> land)
{
    for(int i=0; i<land.size()-1; i++){
        int max=0, second_max=0;
        int max_idx=-1;
        find_num(land[i], &max, &max_idx, &second_max);
        for(int j=0; j<4; j++){
            if(j!=max_idx){
                land[i+1][j] += max;
            }
            else{
                land[i+1][j] += second_max;
            }
        }
    }

    int answer = 0;
    for(int i=0; i<4; i++){
        if(land[land.size()-1][i]>answer){
            answer = land[land.size()-1][i];
        }
    }
    return answer;
}
