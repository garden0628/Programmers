#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int strToint(string number) {
    int num=0;
    int multiple = 1;
    for(int i=number.size()-1; i>=0; i--){
        num += (number[i]-48)*multiple;
        multiple *= 10;
    }
    return num;
}

vector<vector<int>> strTovec(string s) {
    vector<vector<int>> tuple;
    vector<int> num;
    string number;
    for(int i=0; i<s.size()-1; i++){ //�� ���� }}�� �ΰ��̱� ����
        if(s[i]>=48 && s[i]<=57) { //�ƽ�Ű�ڵ� 0�� 48, 9�� 57�̹Ƿ�
            number.push_back(s[i]);
        }
        else if(s[i] == ',') {
            if(number.size() != 0){
                int integer = strToint(number);
                num.push_back(integer);
                number.clear();
            }
        }
        else if(s[i] == '}') {
            int integer = strToint(number);
            num.push_back(integer);
            tuple.push_back(num);
            num.clear();
            number.clear();
        }
    }
    return tuple;
}

//���ߺ��� tuple�� ���� ��� ���Ұ� ����ִ��� �ľ��Ѵ�.
vector<vector<int>> checktuple(vector<vector<int>> tuple) {
    vector<vector<int>> numOfTuple;
    vector<int> v;
    for(int i=0; i<tuple.size(); i++){
        v.push_back(tuple[i].size());
        v.push_back(i);
        numOfTuple.push_back(v);
        v.clear();
    }
    return numOfTuple;
}

int check_overlap(vector<int> answer, vector<int> number) {
    int num;
    for(int i=0; i<number.size(); i++){
        int count = 0;
        for(int j=0; j<answer.size(); j++){
            if(number[i] == answer[j]){
                continue;
            }
            count++;
        }
        if(count == answer.size()){
            num = number[i];
            return num;
        }
    }
}

vector<int> solution(string s) {
    vector<vector<int>> tuple = strTovec(s);
    vector<vector<int>> numOfTuple = checktuple(tuple);

    sort(numOfTuple.begin(), numOfTuple.end());

    vector<int> answer;
    for(int i=0; i<numOfTuple.size(); i++){
        for(int j=0; j<numOfTuple.size(); j++){
            if(i+1 == numOfTuple[j][0]){
                int num = check_overlap(answer, tuple[numOfTuple[j][1]]);
                answer.push_back(num);
            }
        }
    }

    return answer;
}
