/*
프로그래머스 서울에서 김서방 찾기
반복문을 통해 seoul vector를 탐색하며
compare를 통해 Kim을 찾음
*/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	int idx;
	for (int i = 0; i<seoul.size(); i++) {
		if (seoul[i].compare("Kim") == 0) {
			idx = i;
			break;
		}
	}
	answer = "김서방은 " + to_string(idx) + "에 있다";
	return answer;
}