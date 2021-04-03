/*
���α׷��ӽ� ��ɰ���
queue�� ����Ͽ� �ذ�.
task=process�� �����µ� �ɸ��� �� ��
���� task�� ���� ���μ����� task���� �۴ٸ� ����
*/
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> q;
	for (int i = 0; i<progresses.size();i++) {
		int task = 100 - progresses[i];
		if (task%speeds[i] == 0) q.push(task / speeds[i]);
		else q.push(task / speeds[i] + 1);
	}
	int process = 1;
	int task = q.front();
	q.pop();
	while (!q.empty()) {
		if (task < q.front()) {
			task = q.front();
			answer.push_back(process);
			process = 1;
		}
		else {
			process++;
		}
		q.pop();
	}
	answer.push_back(process);
	return answer;
}