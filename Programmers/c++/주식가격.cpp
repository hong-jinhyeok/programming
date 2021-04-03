/*
���α׷��ӽ� �ֽİ���
stack�� ����Ͽ� �ذ�
������ �ö��ٸ� push
�������ٸ� �ݺ����� ���� stack���� ������ ��
answer�� ũ�⸦ �̸� ��Ƶΰ� []�� ���� ����
stack���� ���ݰ� index�� pair���·� ����.
*/
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer(prices.size());
	stack<pair<int, int>> s;
	s.push(make_pair(prices[0], 0));
	for (int i = 1; i<prices.size(); i++) {
		if (s.top().first <= prices[i]) {
			s.push(make_pair(prices[i], i));
		}
		else {
			while (!s.empty() && s.top().first>prices[i]) {
				answer[s.top().second] = i - s.top().second;
				s.pop();
			}
			s.push(make_pair(prices[i], i));
		}
	}
	while (!s.empty()) {
		answer[s.top().second] = prices.size() - 1 - s.top().second;
		s.pop();
	}
	return answer;
}