/*
프로그래머스 신규 아이디 추천
각각의 step을 함수로 구현.
구현할 때 길이가 0일 때 조심해야할 step에 예외를 처리
step1-transform 사용
step2-문자열을 읽으며 확인
step3-새로운 string의 마지막 삽입 문자와 현재 삽입될 문자를 비교하며 삽입
step4-처음과 끝을 확인
step5-조건 확인 후 문자 삽입
step6-16이상일 경우 substr사용 후 마지막 문자 검사
step7-반복문 사용
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string step1(string id) {
	string s = id;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
}
string step2(string id) {
	string s = "";
	for (int i = 0; i<id.length(); i++) {
		if (('a' <= id[i] && id[i] <= 'z') || id[i] == '-' || id[i] == '_' || id[i] == '.' || ('0' <= id[i] && id[i] <= '9')) {
			s.push_back(id[i]);
		}
	}
	return s;
}
string step3(string id) {
	string s = "";
	if (id.length() == 0) return s;
	s.push_back(id[0]);
	for (int i = 1; i<id.length(); i++) {
		if (s[s.length() - 1] == '.' && id[i] == '.') {
			continue;
		}
		else {
			s.push_back(id[i]);
		}
	}
	return s;
}
string step4(string id) {
	string s = "";
	if (id.length() == 0) return s;
	if (id[0] != '.') s.push_back(id[0]);
	for (int i = 1; i<id.length(); i++) {
		s.push_back(id[i]);
	}
	if (s[s.length() - 1] == '.') s.pop_back();
	return s;
}
string step5(string id) {
	string s = "";
	if (id.length() == 0) s.push_back('a');
	else s = id;
	return s;
}
string step6(string id) {
	string s = "";
	if (id.length() > 15) {
		s = id.substr(0, 15);
		if (s[14] == '.') {
			s.pop_back();
		}
	}
	else s = id;
	return s;
}
string step7(string id) {
	string s = "";
	char ch;
	for (int i = 0; i<id.length(); i++) {
		s.push_back(id[i]);
		ch = id[i];
	}
	while (s.length()<3) {
		s.push_back(ch);
	}
	return s;
}

string solution(string new_id) {
	string answer = "";
	answer = step1(new_id);
	answer = step2(answer);
	answer = step3(answer);
	answer = step4(answer);
	answer = step5(answer);
	answer = step6(answer);
	answer = step7(answer);
	return answer;
}