/*
프로그래머스 문자열을 정수로 바꾸기
-일 경우, +일 경우, 부호가 없을 경우 3가지로 나누어서 stoi를 사용
*/
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	if (s[0] == '-') {
		answer = -1 * stoi(s.substr(1, s.length() - 1));
	}
	else if (s[0] == '+') {
		answer = stoi(s.substr(1, s.length() - 1));
	}
	else {
		answer = stoi(s.substr(0, s.length()));
	}
	return answer;
}