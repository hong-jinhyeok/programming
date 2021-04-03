/*
백준 1676 팩토리얼 0의 개수
팩토리얼 수의 끝에 몇개의 연속된 0이 있는지 구하는 문제.
0이 생긴다 -> 10의 승수가 곱해진다.
10으로 나누면서 0의 개수를 센다.
문제의 함정 -> long long int로도 수가 표현이 안될 만큼 크다.
필요한건 끝에 몇개의 수만 필요
어느정도 큰 수(ex. 100000)로 나눈 나머지로만 계산을 이어나간다.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	int facto = 1;
	int count = 0;
	cin >> n;
	while (n > 0) {
		facto *= n;
		while (facto > 0 && facto % 10 == 0) {
			count++;
			facto /= 10;
		}
		if (facto > 100000) {
			facto %= 100000;
		}
		n--;
	}
	
	
	cout << count << "\n";
	return 0;
}
