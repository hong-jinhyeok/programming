/*
���� 1167 Ʈ���� ����
DFS ���.
1. ó�� DFS�� ���� �ָ� �ִ� ��带 ã��.
2. ���� �ָ� �ִ� ������ �ٽ� DFS�� ���.
�ڼ��� ���� :  https://moonsbeen.tistory.com/101 ����
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;

vector<pair<int,int>> v[100000];
int maxlen = 0;
int maxnode = 0;

void dfs(bool* visit,int idx, int& len) {
	if (visit[idx]==true) {
		return;
	}
	if (maxlen < len) {
		maxlen = len;
		maxnode = idx;
	}
	visit[idx] = true;
	for (int i = 0; i < v[idx].size(); i++) {
		len += v[idx][i].second;
		dfs(visit, v[idx][i].first, len);
		len -= v[idx][i].second;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	int vt;
	cin >> vt;
	
	for (int i = 1; i <= vt; i++) {
		int svt;
		cin >> svt;
		while (1) {
			int a;
			cin >> a;
			if (a == -1) break;
			int b;
			cin >> b;
			v[svt - 1].push_back(make_pair(a - 1, b));
		}
	}
	int len = 0;
	bool visit[100000] = { false, };
	dfs(visit, 0, len);
	len = 0;
	maxlen = 0;
	bool visit1[100000] = { false, };
	dfs(visit1, maxnode, len);
	cout << maxlen;
	return 0;
}