/*
���� 9655 �� ����
����� ������ if������ �������� ������ �˱� ���ؼ���
DP�� Ȱ��
dp[i]���� �̱�� ���ؼ��� dp[i-1]�� dp[i-3]���� �̰ܾ���
�̷��� ������ ������Ű�� dp�迭�� ä��ٺ���
Ȧ���� �� ��� ¦���� �� â���̰� ���� ���� Ȯ���� �� ����
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