/*
���α׷��ӽ� �������� ���� ����
�������� ���� 1�� ã���� ��.
sort�Ͽ� completion�� �̸� �������� �ϳ��� ��
�̸��� �޸��ٸ� �� idx�� ����� �������� ���� ����.
�ݺ����� �����ٸ� participant�� ������ ������ �������� ���� ����.
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	int idx = 0;
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (idx = 0; idx<completion.size(); idx++) {
		if (completion[idx].compare(participant[idx]) != 0) {
			break;
		}
	}

	answer = participant[idx];
	return answer;
}