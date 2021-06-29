/*
백준 16395 파스칼의 삼각형
dp 사용
이전 행의 숫자를 더하여 배열을 채움.
파스칼의 삼각형 규칙
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
	int n,k;
	cin >> n >> k;
	int dp[30][30]{ 0, };
	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;
	for (int i = 2; i < 30; i++) {
		dp[i][0] = 1;
		for (int j = 1; j < i; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
		dp[i][i] = 1;
	}
	cout << dp[n - 1][k - 1];
	return 0;
}
