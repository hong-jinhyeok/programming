/*
백준 11727 2xn 타일링2
방법은 2xn 타일링과 동일.
DP를 사용.
1차원 배열을 선언한 후 경우에 수의 따른 값을 저장.
다른 점은 길이가 2인 부분을 채우는 방법이 
2x1짜리 2개를 놓는 방법
2x2짜리 1개를 놓는 방법 2가지므로 x2를 해야함.
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; int* dp = new int[n + 1];
	dp[0] = 1; dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] % 10007 + dp[i - 2] * 2 % 10007) % 10007;
	}
	cout << dp[n] << "\n";
	return 0;
}

