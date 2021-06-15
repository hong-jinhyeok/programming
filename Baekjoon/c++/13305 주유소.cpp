/*
백준 13305 주유소
최소의 기름값을 가지는지 매 반복문마다 확인.
최소의 기름값을 가진 도시면 최소기름값 갱신.
매 도시마다 다음 도시까지의 거리*최소기름값을 하여 더함.
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	vector<long long> load;
	vector<long long> oil;
	long long min_oil = 2000000000;
	long long answer = 0;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		load.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		oil.push_back(a);
	}
	int cur = 0;
	for (int i = 0; i < n-1; i++) {
		if (oil[i] < min_oil) min_oil = oil[i];
		answer += (min_oil*load[i]);
	}
	cout << answer;
	return 0;
}
