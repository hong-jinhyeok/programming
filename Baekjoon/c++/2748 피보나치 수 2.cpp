/*
백준 2748 피보나치 수 2
DP를 활용.
최대 90까지의 수를 받아오기 때문에 배열을 91로 설정.
a1=a2=1로 설정하고 배열에 값을 먼저 채움.
int의 값이 넘어가기 때문에 long long으로 해결.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long arr[91] = { 0,1,1, };
	for (int i = 3; i<91; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int n;
	cin >> n;
	cout << arr[n];
}