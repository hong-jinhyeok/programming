/*
백준 6131 완전 제곱수
sqrt를 사용하여 제급근을 구하고 다시 제곱 했을 때 값이 같은지 확인하여 해결
*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[501] = { 0, };
	for (int i = 0; i < 501; i++) arr[i] = i * i;
	int answer = 0,idx=1;
	for (int i = 1; ; i++) {
		if (arr[i] + n > 250000) break;
		int c = arr[i] + n;
		int b = sqrt(c);
		if (b*b == c) answer++;
	}
	cout << answer;
	return 0;
}
