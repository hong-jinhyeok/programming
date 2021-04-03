/*
���α׷��ӽ� ī��
������ ����� ĭ�� ���� ���� ��ü �簢���� ũ�⸦ �˾Ƴ�
�˾Ƴ� �簢���� ũ��� ���ο� ������ ����� ���� �Ǻ�
(����-2) * (����-2) = ����� ĭ�� ���� ������ ¦�� ã�Ƽ� ��ȯ
*/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	vector<pair<int, int>> v;
	int square = brown + yellow;
	int num = 3;
	while (num <= square / num) {
		if (square%num != 0) {
			num++;
			continue;
		}
		else {
			v.push_back(make_pair(num, square / num));
			num++;
		}
	}
	for (int i = 0; i<v.size(); i++) {
		int a = v[i].first - 2;
		int b = v[i].second - 2;
		if (yellow == a*b) {
			answer.push_back(v[i].second);
			answer.push_back(v[i].first);
			break;
		}
	}
	return answer;
}