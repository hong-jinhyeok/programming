/*
���� 9461 �ĵ��� ����
DP Ȱ��
6�� ° ���ʹ� ���� �� + ù�� ° �� �� ���·�
���ϴ� �� ���� index�� �ϳ��� �����ϸ� ����
dp�迭�� long long�� Ÿ������ �ؾ� overflow�� ���� �� ����
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