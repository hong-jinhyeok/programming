/*
프로그래머스 모음 사전
dfs를 통해 완전탐색 하여 모든 조합이 가능한 단어를 구함
sort를 통해 사전순서로 정렬
해당 단어의 index를 구하여 반환
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

void dfs(int num, string& s, vector<char>& alpha){
    if(num== s.length()){
        v.push_back(s);
        return;
    }
    for(int i=0; i<5; i++){
        s.push_back(alpha[i]);
        dfs(num,s,alpha);
        s.pop_back();
    }
    return;
}

int solution(string word) {
    int answer = 0;
    vector<char> alpha;
    alpha.push_back('A');
    alpha.push_back('E');
    alpha.push_back('I');
    alpha.push_back('O');
    alpha.push_back('U');
    
    for(int i=1; i<=5; i++){
        string s="";
        dfs(i,s,alpha);
    }
    sort(v.begin(),v.end());
    int idx=0;
    while(v[idx].compare(word)!=0) idx++;
    answer=idx+1;
    return answer;
}
