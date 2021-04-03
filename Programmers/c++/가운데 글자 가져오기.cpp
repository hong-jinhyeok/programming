/*
프로그래머스 가운데 글자 가져오기
홀수면 s.length/2
짝수면 s.length/2-1 s.length/2
글자 가져오기
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int len = s.length();
	if (len % 2 == 1) {
		answer.push_back(s[len / 2]);
	}
	else {
		answer.push_back(s[len / 2 - 1]);
		answer.push_back(s[len / 2]);
	}
	return answer;
}