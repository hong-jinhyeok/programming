/*
백준 1759 암호 만들기
완전탐색을 사용.
입력받은 문자열에서 공백을 빼고 vector에 push 후 정렬
완전탐색을 이용하여 해당 길이만큼 부분 문자열을 만들고 모음과 자음 개수확인
조건에 맞는 문자열만 push
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<string> answer;
bool visit[26] = { false, };
vector<char> v;
int num1, num2;

bool checkAlpha(string s) {
	int mo = 0;
	int ja = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') mo++;
		else  ja++;
	}
	if (mo > 0 && ja > 1) return true;
	else return false;
}

void  DFS(string s,int idx) {
	if (num1 == s.length()) {
		if (checkAlpha(s) == true) answer.push_back(s);
		return;
	}
	for (int i = idx; i < v.size(); i++) {
		s.push_back(v[i]);
		DFS(s, i + 1);
		s.pop_back();
	}
	return;
}

int main() {
	cin >> num1 >> num2;
	string s;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') continue;
		else v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	string ss = "";
	for (int i = 0; i < v.size() - 3; i++) {
		ss.push_back(v[i]);
		DFS(ss, i + 1);
		ss.pop_back();
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << "\n";
	}
	return 0;
}
