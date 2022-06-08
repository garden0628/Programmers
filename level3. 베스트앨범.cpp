#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

bool sorting(const pair<int, string>& a, const pair<int, string>& b){
    return a.first > b.first;
}

bool compare(const tuple<int, int, int>& a, const tuple <int, int, int> & b){
    if(get<0>(a) == get<0>(b)){
        if(get<1>(a) == get<1>(b)){
            return (get<2>(a) < get<2>(b));
        }
        else{
            return (get<1>(a) > get<1>(b));
        }
    }
    else{
        return (get<0>(a) < get<0>(b));
    }
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<pair<int, string>> music;
    vector<string> genre_tmp = genres;
    vector<int> play_tmp = plays;
    
    for(int i=0; i<genre_tmp.size(); i++){
        music.push_back(make_pair(play_tmp[i], genre_tmp[i]));
        for(int j=i+1; j<genre_tmp.size(); j++){
            if(genre_tmp[i] == genre_tmp[j]){
                music[music.size()-1].first += play_tmp[j];
                genre_tmp.erase(genre_tmp.begin()+j, genre_tmp.begin()+(j+1));
                play_tmp.erase(play_tmp.begin()+j, play_tmp.begin()+(j+1));
                j--;
            }
        }
    }
    
    vector<int> answer;
    
    sort(music.begin(), music.end(), sorting);
    for(int k=0; k<music.size(); k++){
        vector<tuple<int, int, int>> seq;
        for(int l=0; l<genres.size(); l++){
           if(music[k].second == genres[l]){
                seq.push_back(make_tuple(0, plays[l], l));
            }
        }
        sort(seq.begin(), seq.end(), compare);
        if(seq.size()>1){
            for(int m=0; m<2; m++){
                answer.push_back(get<2>(seq[m]));
            }
        }
        else{
            answer.push_back(get<2>(seq[0]));
        }
    }
    
    return answer;
}
