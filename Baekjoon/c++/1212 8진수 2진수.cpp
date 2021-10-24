/*
백준 1212 8진수 2진수
입력값의 범위가 엄청 크기 때문에 string으로 받아야함
8진수에서 2진수가 될 때
-> 8진수 1자리수당 2진수 3자리가 됨
2진수 string을 만든 뒤 조건에 맞게 앞의 0을 삭제 후 출력
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	string answer = "";
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case '0':
			answer += "000";
			break;
		case '1':
			answer += "001";
			break;
		case '2':
			answer += "010";
			break;
		case '3':
			answer += "011";
			break;
		case '4':
			answer += "100";
			break;
		case '5':
			answer += "101";
			break;
		case '6':
			answer += "110";
			break;
		case '7':
			answer += "111";
			break;
		default:
			break;
		}
	}
	reverse(answer.begin(), answer.end());
	while (1) {
		if (answer.length() > 1 && answer[answer.length() - 1] == '0') answer.pop_back();
		else break;
	}
	reverse(answer.begin(), answer.end());
	cout << answer;
	return 0;
}
