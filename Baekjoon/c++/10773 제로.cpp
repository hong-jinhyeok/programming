/*
น้มุ 
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main() {
	int sum = 0;
	stack<int> s;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0 && !s.empty()) s.pop();
		else if (a != 0) s.push(a);
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}