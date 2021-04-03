/*
백준 1181 단어 정렬
vector만을 이용한 방법.
pair 형태로 단어 <길이, 단어>로 저장
sort를 사용하여 정렬->길이우선, 길이가 같으면 단어 사전적 배열순서로 정렬
출력시 중복만 제가해서 출력
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
	
	vector<pair<int, string>> vp;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		vp.push_back(make_pair(s.length(), s));
	}
	sort(vp.begin(), vp.end());
	string s="";
	for (int i = 0; i < vp.size(); i++) {
		if(s.compare(vp[i].second) != 0)cout << vp[i].second << "\n";
		s = vp[i].second;
	}
	return 0;
}
