/*
���� 1202 ���� ����
priority queue�� multiset ���.
������ ������ 1���� ������ ���ٸ� ���԰� ���ſ�� 2������ ���·� priority queue�� ����
-> pair<����,����>�� priority queue�� ����
 multiset�� ������ ���� ����.
 priority queue�� top���� multiset�� lower_bound ������ ã�� 
 -> iter�� end()�� �ƴ϶�� ������ answer�� + �� multiset���� erase.

*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); 
	cout.tie(NULL);

	int n, k;
	long long answer = 0,maxbm=0;
	priority_queue<pair<int,int>, vector<pair<int, int>>, less<pair<int, int>>> jewelry;
	multiset<int> bag;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int m, v;
		cin >> m >> v;
		jewelry.push(make_pair(v, m));
	}
	for (int i = 0; i < k; i++) {
		int b;
		cin >> b;
		bag.insert(b);
	}

	while (!jewelry.empty() && !bag.empty()) {
		stack<int> s;
		int m = jewelry.top().second;
		int v = jewelry.top().first;
		jewelry.pop();
		multiset<int>::iterator bm;
		bm = bag.lower_bound(m);
		if (bm != bag.end()) {
			answer += (long long)v;
			bag.erase(bm);
		}
	}
	cout << answer;
	return 0;
}