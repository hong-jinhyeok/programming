/*
���α׷��ӽ� �� �� �̾Ƽ� ���ϱ�
���� 2���� �̾Ƽ� ���� ������ ������������ ��ȯ.
���� �ݺ����� ���� ��� ����� ���� ���ϰ� bool �迭�� �����Ͽ� ���� ���� index�� �Ͽ��� �̹� ���� ������ �ߺ��� �Ǻ�.
�������� sort�Լ��� ���� �������� ����.
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	bool visit[201] = { false, };
	for (int i = 0; i<numbers.size() - 1; i++) {
		for (int j = i + 1; j<numbers.size(); j++) {
			int a = numbers[i] + numbers[j];
			if (visit[a] == false) {
				answer.push_back(a);
				visit[a] = true;
			}
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}