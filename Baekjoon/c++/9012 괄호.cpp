/*
백준 9012 괄호
stack을 사용
조건을 만족시키지 않는 경우를 찾아서 NO 출력
*/
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		stack<char> s;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (s.empty() == true && str[j] == ')') {
				cout << "NO\n";
				break;
			}
			else if (str[j] == '(') s.push(str[j]);
			else if (str[j] == ')') s.pop();
			if(j==str.length()-1 && s.empty()==false) cout << "NO\n";
			else if (j == str.length() - 1 && s.empty() == true) cout << "YES\n";
		}
	}
	return 0;
}
