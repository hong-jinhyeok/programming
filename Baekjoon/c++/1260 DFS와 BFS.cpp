/*
백준 1260 DFS와 BFS
기본 알고리즘 DFS와 BFS를 구현.
DFS는 재귀함수를 이용하여 해결.
방문한 곳은 모두 false로 바꿔주고 방문하지 않은 다른 곳을 탐색.
BFS는 queue를 이용하여 해결.
방문할 수 있는 곳은 queue에 저장 후 차례로 방문.
*/
#include <iostream>
#include <queue>
using namespace std;

void DFS(bool** arr, int v, int N) {
	cout << v + 1 << " ";
	for (int i = 0; i < N; i++) {
		if (arr[i][v] == true) arr[i][v] = false;
	}
	for (int i = 0; i < N; i++) {
		if (arr[v][i] == true) {
			DFS(arr, i, N);
		}
	}
}

void BFS(bool** arr, int v, int N) {
	queue<int> q;
	int num = v;
	for (int i = 0; i < N; i++) {
		if (arr[i][num] == true) {
			arr[i][num] = false;
			//arr[num][i] = false;
		}
	}
	q.push(v);
	while (!q.empty()) {
		num = q.front();
		cout << num + 1 << " ";
		q.pop();

		for (int i = 0; i < N; i++) {
			if (arr[num][i] == true) {
				for (int j = 0; j < N; j++) {
					arr[j][i] = false;
				}
				q.push(i);
			}
		}
	}
}
int main() {
	int N, M, V;
	cin >> N; cin >> M; cin >> V;
	bool **arr = new bool*[N];
	bool **arr2 = new bool*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new bool[N];
		arr2[i] = new bool[N];
		for (int j = 0; j < N; j++) {
			arr[i][j] = false;
			arr2[i][j] = false;
		}
		//memset(arr[i], false, sizeof(bool)*N);
		//memset(arr2[i], false, sizeof(bool)*N);
	}
	for (int i = 0; i < M; i++) {
		int num1, num2;
		cin >> num1; cin >> num2;
		arr[num1 - 1][num2 - 1] = true; arr[num2 - 1][num1 - 1] = true;
		arr2[num1 - 1][num2 - 1] = true; arr2[num2 - 1][num1 - 1] = true;
	}
	DFS(arr, V - 1, N);
	cout << "\n";
	BFS(arr2, V - 1, N);
	return 0;
}