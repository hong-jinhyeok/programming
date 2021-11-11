/*
백준 4673 셀프 넘버
d(n)의 함수를 만들어 셀프 넘버가 되지 못하는 수들을 체크
체크가 되지 않을 수들이 셀프넘버가 됨
*/
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int self(int n) {
	int sum = n;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main() {
	bool check[20001] = { false, };
	for (int i = 1; i <= 10000; i++) {
		check[self(i)] = true;
	}
	for (int i = 1; i <= 10000; i++) {
		if (check[i] == false) {
			cout << i << "\n";
		}
	}
	return 0;
}
