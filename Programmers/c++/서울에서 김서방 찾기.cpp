/*
���α׷��ӽ� ���￡�� �輭�� ã��
�ݺ����� ���� seoul vector�� Ž���ϸ�
compare�� ���� Kim�� ã��
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
	answer = "�輭���� " + to_string(idx) + "�� �ִ�";
	return answer;
}