/*
백준 2606 바이러스
BFS를 이용하여 바이러스의 감염된 여부를 확인.
BFS - queue를 이용하여 구현
DFS를 사용하지 않은 이유는 DFS는 모든 경우를 판별하기 때문에
조건을 만족했을 시에 멈출 수 있는 BFS를 사용.
input값에 대한 함수를 따로 구현.
*/
#include <iostream>
#include <queue>
using namespace std;
int N, M;
bool arr[100][100];
queue<int> q;
int c;

int BFS() {
	q.push(0);
	c = 0;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int i = 0; i < N; i++) {
			if (arr[v][i] == 1) {
				for (int j = 0; j < N; j++) {
					arr[j][i] = 0;
				}
				arr[i][v] = 0;
				q.push(i);
				c++;
			}
		}
	}
	return c;
}
void input() {
	cin >> N; cin >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < M; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		arr[n1 - 1][n2 - 1] = 1;
		arr[n2 - 1][n1 - 1] = 1;
	}
	return;
}
int main() {
	input();

	printf("%d\n", BFS());// BFS() << "\n";
	return 0;
}
