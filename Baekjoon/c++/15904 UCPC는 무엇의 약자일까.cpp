/*
백준 15904 UCPC는 무엇의 약자일까
문자열을 검색하면서 UCPC가 순서대로 존재하는지 검사
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
	string UCPC = "UCPC";
	int idx = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (idx == 3 && UCPC[idx] == s[i]) {
			idx++;
			break;
		}
		else if (UCPC[idx] == s[i]) idx++;
	}
	if (idx == 4) cout << "I love UCPC";
	else cout << "I hate UCPC";
	return 0;
}
