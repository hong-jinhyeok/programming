/*
백준 1181 단어 정렬
map과 vector를 사용하여 해결.
map의 find를 이용하여 중복해결
다른 map의 자료구조에 단어의 길이를 key값으로 하여금 저장
출력 전에 value의 vector값을 정렬 후 출력
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> m;
	map<int, vector<string>> m2;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		if (m.find(s) == m.end()) {
			m.insert(make_pair(s, s.length()));
		}
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if (m2.find(it->second) == m2.end()) {
			vector<string> v;
			v.push_back(it->first);
			m2.insert(make_pair(it->second, v));
		}
		else {
			m2[it->second].push_back(it->first);
		}
	}
	for (auto it = m2.begin(); it != m2.end(); it++) {
		vector<string> v = it->second;
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}
	return 0;
}
