/*
백준 15903 카드 합체 놀이
가장 작은 수를 두개 뽑아서 제외하면서 제외한 두 수를 더하고 더한 값을 두번 카드로 추가해 줌.
우선순위 큐를 사용하여 가장 작은 값을 자동적으로 빼내올 수 있게 하여 해결.
마지막에는 큐의 모든 원소를 빼내며 다 더함.
*/
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i<n; i++) {
		long long a;
		cin >> a;
		pq.push(a);
	}
	for (int i = 0; i<m; i++) {
		long long a = pq.top();
		pq.pop();
		long long b = pq.top();
		pq.pop();
		pq.push(a + b);
		pq.push(a + b);
	}
	long long sum = 0;
	while (!pq.empty()) {
		sum += pq.top();
		pq.pop();
	}
	cout << sum;
}