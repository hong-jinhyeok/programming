/*
백준 5585 거스름돈
잔돈의 종류를 큰것부터 연산
가장 많이 가질 낼 수 있을 때까지 카운트
매 턴마다 거스름돈을 최신화
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
	int n,coin=0;
	cin >> n;
	n = 1000 - n;
	while (n >= 500) {
		coin++;
		n -= 500;
	}
	while (n >= 100) {
		coin++;
		n -= 100;
	}
	while (n >= 50) {
		coin++;
		n -= 50;
	}
	while (n >= 10) {
		coin++;
		n -= 10;
	}
	while (n >= 5) {
		coin++;
		n -= 5;
	}
	while (n >= 1) {
		coin++;
		n -= 1;
	}
	cout << coin;
	return 0;
}
