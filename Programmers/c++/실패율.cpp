/*
프로그래머스 실패율
각 스테이지 별로 머물고 있는 플레이어 수를 배열에 저장
각 스테이지 별로 실패율을 계산 후 stage number와 함께 pair의 형태로 저장
실패율을 기준으로 내림차순으로 sort
answer에 순서대로 삽입
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int stg=stages.size();
    double player[501]={0,};
    player[0]=(double)stg;
    for(int i=0; i<stg; i++){
        player[stages[i]]++;
    }
    vector<pair<int,double>> v;
    for(int i=1; i<=N; i++){
        double rate = player[i]/player[0];
        v.push_back(make_pair(i,rate));
        player[0]-=player[i];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N-i-1; j++){
            if(v[j].second < v[j+1].second){
                pair<int, double> p=v[j];
                v[j]=v[j+1];
                v[j+1]=p;
            }
        }
    }
    for(int i=0; i < N; i++){
        answer.push_back(v[i].first);
    }
    return answer;
}
