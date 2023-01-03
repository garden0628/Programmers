#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<int>::iterator i;
    vector<int>::iterator j;
    for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j){
                lost.erase(i);
                reserve.erase(j);
                i--;
                j--;
            }
        }
    }//greedy함으로 잃어버린 학생이 자신의 여별옷을 들고왔다면 무조건 자신이 입는다.

    for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j-1 || *i==*j+1){
                lost.erase(i);
                reserve.erase(j);
                i--;
                j--;
            }
        }
    }

    int answer=n-lost.size();
    /*n               :18
    lost           :[7,8,11,12]
    reserve    : [1,6,8,10]
    위의 코드일 때, 앞서 똑같은 것들을 모두 지웠으므로 lost와 reserve에 남아있는 수들은
    lost    : [7, 11, 12]
    reserve : [1, 6, 10]
    lost의 7과 reserve의 6이 지워지면서 11이 자연스레 lost vector의 begin으로 가면서 11은 비교하지 못하고 바로 12로 넘어간다.
    이처럼 연속적으로 지워질 경우가 잇는 경우 생략 될 수 잇으므로, 빌려줄 수 있는 옷을 찾은 경우 lost와 reserve 값을 지우기 보다는 0으로 대체하기로 했다.*/

    /*for(i=lost.begin(); i<lost.end(); i++){
        for(j=reserve.begin(); j<reserve.end(); j++){
            if(*i==*j-1 || *i==*j+1){
                *i=0;
                *j=0;
            }
        }
    }

    int count=0;//0이 아닌 수를 센다.
    for(i=lost.begin(); i<lost.end(); i++){
        if(*i!=0){
            count++;
        }
    }

    int answer=n-count;*/
    cout<<answer<<endl;

    return 0;
}
//최종적으로 erase에 의해서 한칸 넘어가는 현상을 다시 i,j를 한칸 뒤로 넘겨주는걸로 마무리 했다.
