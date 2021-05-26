/*
백준 1990 소수인팰린드롬
1억까지의 수 중 소수를 찾아서 팰린드롬인 수를 찾는것보다
팰린드롬 수를 찾아서 소수를 찾는 것이 효율.
팰린드롬수는  10000까지 돌리며 찾으면 됨.
-> 9999일 때  99999999를 만들며 이 다음은 팰린드롬 수가 없음
에라스토테네스의 체가 아닌 일반 소수판별 반복문을 각 숫자에 적용.
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


bool sosu(int num) {
	if (num < 2) return false;
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	vector<int> v;

	for (int i = 1; i < 10; i++) {
		string s = to_string(i);
		int n = stoi(s + s);
		if (a <= i && i <= b) v.push_back(i);
		if (a <= n && n <= b) v.push_back(n);

	}
	for (int i = 10; i <= 10000; i++) {
		string s = to_string(i);
		string rs1 = s;
		string rs2 = s;
		rs2.pop_back();
		reverse(rs1.begin(), rs1.end());
		reverse(rs2.begin(), rs2.end());
		int n1 = stoi(s + rs1);
		int n2 = stoi(s + rs2);
		if (a <= n1 && n1 <= b) v.push_back(n1);
		if (a <= n2 && n2 <= b) v.push_back(n2);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (sosu(v[i])) cout << v[i] << "\n";
	}
	cout << "-1";
	return 0;
}