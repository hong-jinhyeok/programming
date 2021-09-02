/*
백준 3986 좋은 단어
stack 활용
top과 비교 후 같다면 pop 다르다면 push
문자열의 마지막 단어까지 비교 후 stack확인
비었다면 좋은 단어 아니라면 나쁜 단어
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		stack<char> st;
		for (int j = 0; j < s.length(); j++) {
			if (st.empty()) st.push(s[j]);
			else if (s[j] == st.top()) {
				st.pop();
			}
			else {
				st.push(s[j]);
			}
		}
		if (st.empty()) answer++;
	}
	cout << answer;
	return 0;
}
