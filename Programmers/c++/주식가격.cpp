/*
프로그래머스 주식가격
stack을 사용하여 해결
가격이 올랐다면 push
떨어졌다면 반복문을 통해 stack에서 빼내며 비교
answer의 크기를 미리 잡아두고 []을 통해 접근
stack에는 가격과 index를 pair형태로 저장.
*/
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer(prices.size());
	stack<pair<int, int>> s;
	s.push(make_pair(prices[0], 0));
	for (int i = 1; i<prices.size(); i++) {
		if (s.top().first <= prices[i]) {
			s.push(make_pair(prices[i], i));
		}
		else {
			while (!s.empty() && s.top().first>prices[i]) {
				answer[s.top().second] = i - s.top().second;
				s.pop();
			}
			s.push(make_pair(prices[i], i));
		}
	}
	while (!s.empty()) {
		answer[s.top().second] = prices.size() - 1 - s.top().second;
		s.pop();
	}
	return answer;
}