/*
백준 2720 세탁소 사장 동혁
잔돈의 종류를 큰것부터 연산
쿼터-다임-니켈-페니 순으로 연산
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
	int n,coin=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int coin;
		cin >> coin;
		int qu = 0, da = 0, ni = 0, se = 0;
		while (coin >= 25) {
			coin -= 25;
			qu++;
		}
		while (coin >= 10) {
			coin -= 10;
			da++;
		}
		while (coin >= 5) {
			coin -= 5;
			ni++;
		}
		while (coin >= 1) {
			coin -= 1;
			se++;
		}
		cout << qu << " " << da << " " << ni << " " << se << "\n";
	}
	return 0;
}
