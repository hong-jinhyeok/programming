/*
백준 9461 파도반 수열
DP 활용
6번 째 부터는 이전 수 + 첫번 째 수 의 형태로
더하는 두 수의 index를 하나씩 증가하며 덧셈
dp배열은 long long의 타입으로 해야 overflow를 막을 수 있음
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
	long long dp[101] = { 0,1,1,1,2,2,3,4,5,7,9 };
	int j = 6;
	for (int i = 11; i < 101; i++) {
		dp[i] = dp[i - 1] + dp[j];
		j++;
	}
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a;
		cin >> a;
		cout << dp[a] << "\n";
	}
	return 0;
}