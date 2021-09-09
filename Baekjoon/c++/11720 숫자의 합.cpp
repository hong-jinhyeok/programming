/*
백준 11720 숫자의 합
문자를 하나씩 잘라서 숫자로 변화 후 덧셈
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	cout << sum;
	return 0;
}
