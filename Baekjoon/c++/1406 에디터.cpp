/*
���� 4949 �������� ����
������ �̿��Ͽ� �ذ�
(, [  push
) -> stack�� ����ų� top�� [�̸� fail
] -> stack�� ����ų� top�� (�̸� fail
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	string ss,buf;
	getline(cin, ss);
	int n;
	cin >> n;
	getline(cin, buf);
	stack<char> s;
	stack<char> ds;
	for (int i = 0; i < ss.length(); i++) {
		s.push(ss[i]);
	}
	for (int i = 0; i < n; i++) {
		string cmd;
		getline(cin,cmd);
		if (cmd[0] == 'L') {
			if (s.empty()) continue;
			ds.push(s.top());
			s.pop();
		}
		else if (cmd[0] == 'D') {
			if (ds.empty()) continue;
			s.push(ds.top());
			ds.pop();
		}
		else if (cmd[0] == 'B') {
			if (s.empty()) continue;
			s.pop();
		}
		else if (cmd[0] == 'P') {
			s.push(cmd[2]);
		}
	}
	string answer = "";
	while (!ds.empty()) {
		s.push(ds.top());
		ds.pop();
	}
	while (!s.empty()) {
		answer.push_back(s.top());
		s.pop();
	}
	reverse(answer.begin(), answer.end());
	cout << answer;
	return 0;
}