/*
프로그래머스 최댓값과 최솟값
문자열을 읽으며 하나의 정수의 형태가 되었다면
정수로 형변환하여 vector에 삽입
정수를 담은 vector를 sort
answer에는 다시 문자열로 바꾸어 vector의 처음 값과 끝 값을 붙임
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = "";
	string ss = "";
	vector<int> v;
	for (int i = 0; i<s.length(); i++) {
		if (s[i] == ' ') {
			v.push_back(stoi(ss));
			ss = "";
		}
		else {
			ss.push_back(s[i]);
		}
	}
	v.push_back(stoi(ss));
	sort(v.begin(), v.end());
	answer = to_string(v[0]) + " " + to_string(v[v.size() - 1]);
	return answer;
}