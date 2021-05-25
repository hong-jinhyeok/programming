/*
백준 1062 가르침
input의 크기가 작기 때문에 완전탐색 사용 후 이중반복문까지 사용.
익힌 알파벳을 알기 위한 visit배열
k개만큼 배웠다면 모든 단어를 검사하여 알 수 있는 단어의 개수를 파악.
최대 개수와 비교 후 최신화.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
using namespace std;

int n,k;
vector<string> v;
int answer;

void dfs(int idx, int num, bool* visit){
	if(k==num){
	    int sanswer=0;
		for(int i=0; i<n; i++){
			bool check=false;
			for(int j=0; j<v[i].length(); j++){
				if(!visit[v[i][j]-'a']){
					check=true;
					break;
				} 
			}
			if(!check) sanswer++;
		}
		if(answer<sanswer) answer=sanswer;
		return;
	}
	for(int i=idx; i<26; i++){
		if(visit[i]) continue;
		visit[i]=true;
		dfs(i+1,num+1,visit);
		visit[i]=false;
	}
	return;
}

int main()
{
	cin >> n >> k;
	answer=0;
	if(k<5) {
		cout << answer;
		return 0;
	}
	
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		if(s.compare("antatica")==0) v.push_back("a");
		else v.push_back(s.substr(4,s.length()-8));
	}
	bool visit[26]={false,};
	visit[0]=true;
	visit['t'-'a']=true;
	visit['n'-'a']=true;
	visit['i'-'a']=true;
	visit['c'-'a']=true;
	dfs(1,5,visit);
	cout << answer;
	return 0;
}
