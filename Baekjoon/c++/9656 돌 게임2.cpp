/*
백준 9655 돌 게임
결과는 간단한 if문으로 나오지만 이유를 알기 위해서는
DP를 활용
dp[i]에서 이기기 위해서는 dp[i-1]과 dp[i-3]에서 이겨야함
이러한 조건을 만족시키며 dp배열을 채우다보면
홀수일 땐 상근 짝수일 땐 창영이가 지는 것을 확인할 수 있음
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0) cout << "SK";
	else cout << "CY";
	return 0;
}