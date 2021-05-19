/*
백준 1747 소수&팰린드롬
두 가지의 조건을 만족 -> 소수와 팰린드롬
소수인 수 중 팰린드롬 검사
소수 -> 2이상의 자연수에 제곱근을 구하고 2~제곱근까지 반복문을 돌며 나눠지는 수가 있는지 판별
팰린드롬 -> 문자열에 저장하고 reverse시킨 것과 compare
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cmath>
#include <queue>
using namespace std;

bool sosu(int num) {
	if (num < 2) return false;
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	int answer = 0;
	for (int i = n; ; i++) {
		if (sosu(i) == true) {
			string s = to_string(i);
			string rs = s;
			reverse(rs.begin(), rs.end());
			if (s.compare(rs) == 0) {
				answer = i;
				break;
			}
		}
	}
	cout << answer;
	return 0;
}
