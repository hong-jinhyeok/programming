/*
백준 2178 미로 탐색
BFS를 이용 -> 가장 빠른 루트를 찾으면 프로그램을 끝내기 위해.
상하좌우에서 이동할 수 있는 곳의 좌표를 queue에 입력.
이동한 위치는 1->0으로 변환
*/
#include <iostream>
#include <queue>
using namespace std;
int N, M;
char arr[100][101];
queue<pair<pair<int, int>, int>> q;
int w;
int h;
int c;
int BFS() {
	w = 0; h = 0; c = 1;
	arr[0][0] = '0';
	q.push(make_pair(make_pair(h, w), c));
	while (h != N - 1 || w != M - 1) {
		w = q.front().first.second;
		h = q.front().first.first;
		c = q.front().second;
		q.pop();
		if (h > 0 && arr[h - 1][w] == '1') {
			q.push(make_pair(make_pair(h - 1, w), c + 1));
			arr[h - 1][w] = '0';
		}
		if (h < N - 1 && arr[h + 1][w] == '1') {
			q.push(make_pair(make_pair(h + 1, w), c + 1));
			arr[h + 1][w] = '0';
		}
		if (w > 0 && arr[h][w - 1] == '1') {
			q.push(make_pair(make_pair(h, w - 1), c + 1));
			arr[h][w - 1] = '0';
		}
		if (w < M - 1 && arr[h][w + 1] == '1') {
			q.push(make_pair(make_pair(h, w + 1), c + 1));
			arr[h][w + 1] = '0';
		}
	}
	return c;
}
void input() {
	cin >> N; cin >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	return;
}
int main() {
	input();

	printf("%d\n", BFS());
	return 0;
}
