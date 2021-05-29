/*
백준 1766 문제집
위상정렬을 사용.
위상정렬에서 사용하는 queue를 priority queue로 하여 오름차순으로 사용
-> 난이도가 낮은 문제부터 풀기 위해.
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