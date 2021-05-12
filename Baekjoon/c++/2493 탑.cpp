/*
백준 2493 탑
가장 오른쪽의 탑->vector의 마지막 index값
가장 마지막부터 pop하여 stack에 push
stack의 top과 길이가 바뀐 vector의 마지막 값과 비교
-> vector 값이 크거나 같다면 레이저에 맞는 탑 -> stack에서 push 후 answer에 값입력.
-> stack 값이 크다면 그대로 진행.
vector값을 모두 사용 -> stack에 남아있는 값들의 index에 모두 0 삽입.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> top;
	vector<int> answer(N);
	stack<pair<int,int>> s;

	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		top.push_back(a);
	}

	while(top.size()>0){
		int h=top[top.size()-1];
		s.push(make_pair(h,top.size()-1));
		top.pop_back();

		if(!s.empty() && s.top().first <= top[top.size()-1]){
			while(!s.empty() && s.top().first <= top[top.size()-1]){
				answer[s.top().second]=top.size();
				s.pop();
			}
		}
	}

	while(!s.empty()){
		answer[s.top().second]=0;
		s.pop();
	}

	for(int i=0; i<N; i++) cout << answer[i] << " ";
}
