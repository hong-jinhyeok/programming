/*
백준 1316 그룹 단어 체커
map의 find 함수를 이용.
map에 없는 글자면 추가
있다면 이전 문자와 같은지 판별 
-> 이전 문자와 같다면 넘어감.
-> 다르다면 그룹이 아님.
*/
#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		char ch=s[0];
		map<char, int> m;
		int check = 0;
		m.insert(make_pair(ch,1));
		for (int j = 1; j < s.length(); j++) {
			if (m.find(s[j]) == m.end()) {
				m.insert(make_pair(s[j], 1));
			}
			else if(s[j]!=ch) {
				check = 1;
				break;
			}
			ch = s[j];
		}
		if (check == 0) count++;
	}
	cout << count;
	return 0;
}
