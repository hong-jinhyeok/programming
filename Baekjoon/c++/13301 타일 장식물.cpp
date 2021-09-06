/*
백준 13301 타일 장식물
피보나치 수열의 규칙을 따름
마지막 답은 arr[n] * 2 + arr[n + 1] * 2의 규칙을 따름
*/
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;
typedef pair<int, int> P;


int main() {
	ios_base::sync_with_stdio(false);
	ios::sync_with_stdio(false);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	
	int n;
	cin >> n;
	long long arr[82] = { 0,1, };
	for (int i = 2; i <= n + 1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n] * 2 + arr[n + 1] * 2;
	return 0;
}
