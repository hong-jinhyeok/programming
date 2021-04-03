/*
���� 15903 ī�� ��ü ����
���� ���� ���� �ΰ� �̾Ƽ� �����ϸ鼭 ������ �� ���� ���ϰ� ���� ���� �ι� ī��� �߰��� ��.
�켱���� ť�� ����Ͽ� ���� ���� ���� �ڵ������� ������ �� �ְ� �Ͽ� �ذ�.
���������� ť�� ��� ���Ҹ� ������ �� ����.
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