/*
백준 17413 단어 뒤집기 2
<>에는 queue를 사용하여 순서를 유지
나머지는 stack을 이용하여 역순으로 출력
<>안에서는 공백을 일반문자로 취급
<> 밖에서는 공백을 기준으로 역순 단어로 출력
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;
string output(queue<char> &q, stack<char> &s, bool turn) {
	string str = "";
	if (turn) {
		while (!q.empty()) {
			str.push_back(q.front());
			q.pop();
		}
	}
	else {
		while (!s.empty()) {
			str.push_back(s.top());
			s.pop();
		}
	}
	return str;
}
int main() {
	string str = "";
	string answer = "";
	getline(cin, str);
	queue<char> q;
	stack<char> s;
	bool turn = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '<') {
			q.push(str[i]);
			answer += output(q, s, turn);
			turn = true;
		}
		else if (str[i] == '>') {
			q.push(str[i]);
			answer += output(q, s, turn);
			turn = false;
		}
		else if (turn) {
			q.push(str[i]);
		}
		else if(!turn) {
			if (str[i] == ' ') {
				answer += output(q, s, turn);
				answer.push_back(str[i]);
			}
			else s.push(str[i]);
		}
	}
	answer += output(q, s, turn);
	cout << answer;
	return 0;
}
