/*
���α׷��ӽ� ��Ʈ��ũ
BFS�� �̿��Ͽ� �ذ�.
�湮������ �Ǻ��ϴ� �迭 visit
������踦 ��Ÿ���� �迭 network
�� ��Ʈ��ũ�� �������� ����Ǿ� �ִ� ��Ʈ��ũ�� ��� ã��.
���� �湮���� ���� ��Ʈ��ũ�� �ִٸ� �� ��Ʈ��ũ�� �������� �ٽ� Ž��.
*/
#include <string>
#include <vector>
#include <queue>
using namespace std;
queue<int> q;
void BFS(bool *visit, bool network[][200], int n) {
	while (!q.empty()) {
		int num = q.front(); q.pop();
		visit[num] = false;
		for (int i = 0; i<n; i++) {
			if (network[num][i] == true && visit[i] == true) q.push(i);
		}
	}
}
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;
	bool visit[200] = { false, };
	bool network[200][200] = { false, };

	for (int i = 0; i<n; i++) {
		visit[i] = true;
		for (int j = 0; j<n; j++) {
			network[i][j] = computers[i][j];
		}
	}
	for (int i = 0; i<n; i++) {
		if (visit[i] == true) {
			answer++;
			q.push(i);
			BFS(visit, network, n);
		}
	}
	return answer;
}