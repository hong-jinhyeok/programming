/*
���� 1766 ������
���������� ���.
�������Ŀ��� ����ϴ� queue�� priority queue�� �Ͽ� ������������ ���
-> ���̵��� ���� �������� Ǯ�� ����.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
using namespace std;

#define MAX 32001

vector<int> v[MAX];
int inDegree[MAX] = { 0, };

void Sort(int n) {
	int result[MAX] = { 0, };
	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 1; i <= n; i++) {
		if (inDegree[i] == 0) pq.push(i);
	}

	for (int i = 1; i <= n; i++) {
		if (pq.empty()) {
			return;
		}
		int x = pq.top();
		pq.pop();
		result[i] = x;
		for (int i = 0; i < v[x].size(); i++) {
			int y = v[x][i];
			if (--inDegree[y] == 0) {
				pq.push(y);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << result[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		inDegree[b]++;
	}
	Sort(n);
	return 0;
}