/*
���α׷��ӽ� ��Ʈ��ũ
DFS�� �̿��Ͽ� �ذ�.
�湮������ �Ǻ��ϴ� �迭 visit
������踦 ��Ÿ���� �迭 network
�� ��Ʈ��ũ�� �������� ����Ǿ� �ִ� ��Ʈ��ũ�� ��� ã��.
���� �湮���� ���� ��Ʈ��ũ�� �ִٸ� �� ��Ʈ��ũ�� �������� �ٽ� Ž��.
*/
#include <string>
#include <vector>

using namespace std;
void DFS(bool *visit, bool network[][200], int idx, int n) {
	visit[idx] = false;
	for (int i = 0; i<n; i++) {
		if (visit[i] == true && network[idx][i] == true) {
			DFS(visit, network, i, n);
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
			DFS(visit, network, i, n);
		}
	}
	return answer;
}