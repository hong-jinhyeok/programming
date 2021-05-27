/*
백준 9020 골드바흐의 추측
에라스토테네스의 체를 사용하여 소수를 먼저 판별.
2부터 해당 수의 절반까지 반복문을 돌며 소수를 i, n-i 두개를 판별. 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc;
	cin >> tc;

	bool number[10001] = { false, };

	for (int i = 0; i <= 10000; i++) number[i] = 1;

	for (int i = 2; i <= sqrt(10000); i++) {
		if (number[i] == 0) continue;
		for (int j = i * i; j <= 10000; j += i) {
			number[j] = 0;
		}
	}

	for (int i = 0; i < tc; i++) {
		int a;
		cin >> a;
		int n1 = 0, n2 = 0;
		for (int i = 2; i <= a / 2; i++) {
			if (number[i] && number[a - i]) {
				n1 = i;
				n2 = a - i;
			}
		}
		cout << n1 << " " << n2 << "\n";
	}
	return 0;
}
