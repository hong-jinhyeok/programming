/*
백준 1644 소수의 연속합
에라스토테네스의 체 사용 -> 소수판별
 2 pointer -> 연속합을 구하여 크기를 비교
 -> 연속합이 크면 왼쪽 pointer +1
 -> 연속합이 작으면 오른쪽 pointer +1
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

	int answer = 0;
	int n;
	cin >> n;

	vector<int> v;
	bool number[4000001] = { 0, };
	for (int i = 0; i <= n; i++) number[i] = 1;

	for (int i = 2; i <= sqrt(n); i++) {
		if (number[i] == 0) continue;
		for (int j = i * i; j <= n; j += i) {
			number[j] = 0;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (number[i] != 0) v.push_back(i);
	}

	int start = 0, end = 0;
	int sum = 0;
	while (1) {
		if (sum >= n) sum-=v[start++];
		else if (end == v.size()) break;
		else sum+=v[end++];
		if (sum == n) answer++;
	}

	cout << answer;
	return 0;
}