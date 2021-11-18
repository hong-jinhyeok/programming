/*
백준 10937 이전 순열
prev_permutation을 사용하여
이전 순열이 있다면 자동 변환 후 출력
없다면 false를 반환 하므로 -1 출력
출력 양식 문제로 판단 오류 해결해야함
*/
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	string s;
	string ss;
	int n;
	cin >> n;
	getline(cin, ss);
	getline(cin, ss);
	for (int i = 0; i < ss.length(); i++) {
		if ('0'<=ss[i]&&ss[i]<='9') s.push_back(ss[i]);
	}
	if (prev_permutation(s.begin(), s.end())) {
		for(int i=0; i<s.length(); i++)
			cout << s[i] << " ";
	}
	else cout << "-1";
	return 0;
}
