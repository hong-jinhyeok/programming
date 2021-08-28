/*
백준 4949 균형잡힌 세상
스택을 이용하여 해결
(, [  push
) -> stack이 비었거나 top이 [이면 fail
] -> stack이 비었거나 top이 (이면 fail
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main() {
	while (1) {
		string s;
		stack<char> st;
		bool check = true;
		getline(cin, s);
		if (s.compare(".") == 0) break;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '[') st.push(s[i]);
			else if (s[i] == ')') {
				if (st.empty()) {
					check = false;
					break;
				}
				else if (st.top() == '[') {
					check = false;
					break;
				}
				st.pop();
			}
			else if (s[i] == ']') {
				if (st.empty()) {
					check = false;
					break;
				}
				else if (st.top() == '(') {
					check = false;
					break;
				}
				st.pop();
			}
		}
		if(!check || !st.empty()) cout << "no\n";
		else cout << "yes\n"; 
	}
	return 0;
}
