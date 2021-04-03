/*
프로그래머스 기능개발
queue를 사용하여 해결.
task=process가 끝나는데 걸리는 일 수
현재 task가 다음 프로세스의 task보다 작다면 배포
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