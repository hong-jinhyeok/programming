/*
프로그래머스 네트워크
DFS를 이용하여 해결.
방문유무를 판별하는 배열 visit
연결관계를 나타내는 배열 network
한 네트워크를 시작으로 연결되어 있는 네트워크를 모두 찾음.
아직 방문하지 않은 네트워크가 있다면 그 네트워크를 시작으로 다시 탐색.
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