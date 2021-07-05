/*
백준 1343 폴리오미노
반복문을 통해 문자열을 읽어가며 해결.
우선순위를 두고 해야함.
1. X면 카운트+1
2. 4를 채우면 무조건 AAAA로 변환
3. .을 만났을 경우 홀수면 -1 출력 후 종료, 4면 AAAA 2면 BB로 변환
4. 반복문이 끝난 후 3번과 같은 조건으로 검사 후 변환
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	string answer = "";
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'X') cnt++;
		else {
			if (cnt % 2 == 1) {
				cout << "-1";
				return 0;
			}
			else {
				if (cnt == 4) answer += "AAAA";
				else if (cnt == 2) answer += "BB";
				answer += ".";
				cnt = 0;
			}
		}
		if (cnt == 4) {
			answer += "AAAA";
			cnt = 0;
		}
	}
	if (cnt % 2 == 1) {
		cout << "-1";
		return 0;
	}
	else {
		if (cnt == 4) answer += "AAAA";
		else if (cnt == 2) answer += "BB";
	}
	cout << answer;
	return 0;
}
