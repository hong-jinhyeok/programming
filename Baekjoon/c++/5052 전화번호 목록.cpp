/*
백준 5052 전화번호 목록
문자열의 특성상 정렬시 substr이 자신의 앞에 온다는 특징을 이용
sort 후 자신과 다음 문자열 중 짧은 것에 기준을 맞춰 substr 생성
compare하여 접두어가 맞는지 확인
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

bool checkStr(string s1, string s2) {
	string sa, sb;
	if (s1.length() > s2.length()) {
		sa = s1.substr(0, s2.length());
		sb = s2;
	}
	else {
		sa = s1;
		sb = s2.substr(0, s1.length());
	}
	if (sa.compare(sb) == 0) return false;
	else return true;
}

int main() {
	int t;
	cin >> t;
	while (t > 0) {
		int n;
		cin >> n;
		vector<string> v;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		bool an = true;
		for (int i = 0; i < n - 1; i++) {
			if (an = checkStr(v[i], v[i + 1])) continue;
			else {
				break;
			}
		}
		if (an == true) cout << "YES\n";
		else cout << "NO\n";
		t--;
	}
	return 0;
}
