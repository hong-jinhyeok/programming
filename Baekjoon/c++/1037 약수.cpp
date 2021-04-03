/*
백준 1037 약수
가장 큰 약수와 가장 작은 약수를 곱하면 해당 약수를 가진 수를 구할 수 있음.
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
