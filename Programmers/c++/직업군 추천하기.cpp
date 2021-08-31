/*
프로그래머스 직업군 추천하기
각 직업군을 저장하는 벡터 v와 직업군 마다 언어의 종류와 언어의 점수를 map으로 저장하고 이를 벡터에 저장
-> 직업군의 벡터와 해당 직업군이 갖는 언어 map의 index를 맞추기 위함
5가지 직업군을 모두 순회하며 선호도에 따라 점수를 계산하고 최고점의 직업 중 사전적 순서에 따른 직업을 선택
*/
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    vector<map<string,int>> tv;
    vector<string> v;
    for(int i=0; i<5; i++){
        map<string,int> m;
        istringstream ss(table[i]);
        string s="";
        getline(ss, s, ' ');
        v.push_back(s);
        int n=5;
        while (getline(ss, s, ' ')){
            m.insert(make_pair(s,n));
            n--;
        }
        tv.push_back(m);
    }
    int ms=0;
    int mi=0;
    for(int i=0; i<5; i++){
        int sum=0;
        for(int j=0; j<languages.size(); j++){
            sum+=tv[i][languages[j]]*preference[j];
        }
        if(sum>ms){
            mi=i;
            ms=sum;
        }
        else if(sum==ms){
            if(v[mi].compare(v[i])>0) {
                mi=i;
            }
        }
    }
    answer=v[mi];
    return answer;
}
