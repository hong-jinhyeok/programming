/*
���α׷��ӽ� �� �� �̾Ƽ� ���ϱ�
���� 2���� �̾Ƽ� ���� ������ ������������ ��ȯ.
���� �ݺ����� ���� ��� ����� ���� ���ϰ� map key���� Ư���� �̿��Ͽ� �ߺ� �ذ�.
map�� key������ answer�� �Է�.
*/
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	map<int, int> m;
	for (int i = 0; i<numbers.size() - 1; i++) {
		for (int j = i + 1; j<numbers.size(); j++) {
			int a = numbers[i] + numbers[j];
			if (m.find(a) == m.end()) {
				m.insert(make_pair(a, 1));
			}
		}
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		answer.push_back(i->first);
	}
	return answer;
}