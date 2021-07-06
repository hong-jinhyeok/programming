/*
백준 2581 소수
1부터 10000까지 소수를 찾아 표시한 bool형 배열을 선언 및 초기화
->소수는 2부터 제곱근 사이에 나눠지는 수가 있는지 찾음.
두 수 사이의 소수를 모두 찾아 더하고 최솟값을 찾음
최솟값이 있다면 합과 최솟값 출력
없다면 -1 출력
*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool sosu(int num) {
	if (num < 2) return false;
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

int main() {
	bool num[10001] = { false, };
	for (int i = 2; i < 10001; i++) {
		if (sosu(i)) num[i] = true;
	}
	int n, m;
	cin >> n >> m;
	int min_n = 0, sum = 0;
	for (int i = n; i <= m; i++) {
		if (num[i]) {
			if (min_n == 0) min_n = i;
			sum += i;
		}
	}
	if (min_n == 0) cout << -1;
	else cout << sum << "\n" << min_n;
	return 0;
}
