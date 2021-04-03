/*
���� 2606 ���̷���
BFS�� �̿��Ͽ� ���̷����� ������ ���θ� Ȯ��.
BFS - queue�� �̿��Ͽ� ����
DFS�� ������� ���� ������ DFS�� ��� ��츦 �Ǻ��ϱ� ������
������ �������� �ÿ� ���� �� �ִ� BFS�� ���.
input���� ���� �Լ��� ���� ����.
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
