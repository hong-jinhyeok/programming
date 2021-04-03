/* 
백준 4153 직각삼각형 
세 개의 정수를 입력 받고 삼각형 결성 조건 판별.
삼각형이라면 직각삼각형 조건 판별.
*/
#include <iostream>
using namespace std;

int main() {
	long long int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		int l, m, n;
		if (a > b && a > c) {
			l = a; m = b; n = c;
		}
		else if (b > a && b > c) {
			l = b; m = a; n = c;
		}
		else {
			l = c; m = b; n = a;
		}
		if (c == 0 && a == 0 && b == 0) {
			return 0;
		}
		else if (l * l == m * m + n * n) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
	return 0;
}