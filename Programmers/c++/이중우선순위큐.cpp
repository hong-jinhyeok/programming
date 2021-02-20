/*
���α׷��ӽ� ���߿켱����ť
���͸� �̿��� ���߿����ť ����
�տ� ���ڿ� ���� ���� ����
I->2��°���� ������ ���ڿ��� int������ ��ȯ �� ����
D->3��° ���ڿ��� 1�̸� �������� ���� �� pop back �ƴϸ� �������� ���� �� pop back
���� vector�� ������ �� �ִ� ���� �ּ� ���� answer�� ����
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> operations) {
	vector<int> answer;
	vector<int> v;
	for (int i = 0; i<operations.size(); i++) {
		if (operations[i][0] == 'I') {
			v.push_back(stoi(operations[i].substr(2, operations[i].length() - 2)));
		}
		else if (v.size() == 0) {
			continue;
		}
		else if (operations[i][0] == 'D' && operations[i][2] == '1') {
			sort(v.begin(), v.end());
			v.pop_back();
		}
		else {
			sort(v.begin(), v.end(), greater<>());
			v.pop_back();
		}
	}
	if (v.size() == 0) {
		answer.push_back(0);
		answer.push_back(0);
	}
	else {
		sort(v.begin(), v.end());
		answer.push_back(v[v.size() - 1]);
		answer.push_back(v[0]);
	}
	return answer;
}