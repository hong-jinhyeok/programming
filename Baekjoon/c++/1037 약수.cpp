/*
���� 1037 ���
���� ū ����� ���� ���� ����� ���ϸ� �ش� ����� ���� ���� ���� �� ����.
*/
#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[v.size() - 1];
	return 0;
}
