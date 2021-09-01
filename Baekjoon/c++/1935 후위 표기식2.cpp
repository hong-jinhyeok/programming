/*
백준 1935 후위 표기식2
스택을 사용
연산자가 아니면 스택에 push
연산자를 만나면 두개를 pop하여 계산 후 다시 스택에 push
결과값은 스택의 top이므로 top을 출력
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
	string s;
	cin >> n;
	cin >> s;
	vector<int> v;
	stack<double> st;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '*' && s[i] != '+' &&s[i] != '/' &&s[i] != '-') {
			st.push((double)v[s[i] - 'A']);
		}
		else {
			double a = st.top();
			st.pop();
			double b = st.top();
			st.pop();
			if (s[i] == '*') st.push(a*b);
			else if (s[i] == '+') st.push(a+b);
			else if (s[i] == '-') st.push(b-a);
			else if (s[i] == '/') st.push(b/a);
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top();
	return 0;
}
