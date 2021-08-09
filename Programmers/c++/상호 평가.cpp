/*
프로그래머스 상호 평가
처음 주어지는 2차원 벡터 scores를 대각선으로 대칭하여 값을 바꾸어 진행
평균을 구하여 학점을 반환하는 함수 작성
평균을 구하는 함수에는 자신의 상호평가 점수 벡터와 자신의 점수를 인자로 넘김
함수 내부에서 자신의 상효평가 점수를 sort 후 
자신의 점수가 유일한 최고점 혹은 최저점인지 판별
자신의 점수를 제외 혹은 포함하여 알맞은 평균을 구하고 알맞은 학점을 반환
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

char Avg(vector<int> v, int my){
    double sum = 0;
    double Size=(double)v.size();
    sort(v.begin(),v.end());
    if((v[0]==my&&v[1]!=my) || (v[v.size()-1]==my && v[v.size()-2]!=my)) {
        Size--;
        sum-=my;
    }
    for(int i=0; i<v.size(); i++){
        sum+=(double)v[i];
    }
    double avg = sum/Size;
    //cout << avg << endl;
    if(avg>=90) return 'A';
    if(avg>=80) return 'B';
    if(avg>=70) return 'C';
    if(avg>=50) return 'D';
    return 'F';
}

string solution(vector<vector<int>> scores) {
    string answer = "";
    vector<vector<int>> v;
    for(int i=0; i<scores.size(); i++){
        vector<int> sv;
        for(int j=0; j<scores.size(); j++){
            sv.push_back(scores[j][i]);
        }
        v.push_back(sv);
    }
    for(int i=0; i<scores.size(); i++){
        answer.push_back(Avg(v[i],v[i][i]));
    }
    return answer;
}
