/*
백준 10973 이전 순열
prev_permutation을 사용하여
이전 순열이 있다면 자동 변환 후 출력
없다면 false를 반환 하므로 -1 출력
*/
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	bool check = prev_permutation(v.begin(), v.end());
	if (check) {
		for (int i = 0; i < n; i++) cout << v[i] << " ";
	}
	else cout << "-1";
	return 0;
}
