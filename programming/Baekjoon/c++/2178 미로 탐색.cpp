/*
���� 2178 �̷� Ž��
BFS�� �̿� -> ���� ���� ��Ʈ�� ã���� ���α׷��� ������ ����.
�����¿쿡�� �̵��� �� �ִ� ���� ��ǥ�� queue�� �Է�.
�̵��� ��ġ�� 1->0���� ��ȯ
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
