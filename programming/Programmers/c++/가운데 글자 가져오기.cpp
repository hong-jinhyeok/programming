/*
���α׷��ӽ� ��� ���� ��������
Ȧ���� s.length/2
¦���� s.length/2-1 s.length/2
���� ��������
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