/*
백준 2839 설탕 배달
5로 나누어 5kg짜리 설탕 봉지 수를 먼저 구함
나머지를 3으로 나눔
나누어 떨어지지 않으면 5키로짜리 하나를 빼서 무게에 더한 후 다시 계산
3키로 봉지와 5키로 봉지가 0이라면 -1출력
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
	int k5 = n / 5;
	int k3 = 0;
	int remain = n % 5;
	while (k5 >= 0) {
		if (remain % 3 == 0) {
			k3 = remain / 3;
			break;
		}
		else {
			k5--;
			remain += 5;
		}
	}
	if (k5 == 0 && k3 == 0) cout << "-1";
	else cout << k5 + k3;
	return 0;
}
