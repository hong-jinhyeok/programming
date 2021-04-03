/*
프로그래머스 문자열 내 마음대로 정렬하기
vector에 페어형태로 n번째 문자와 본 단어를 저장
sort로 정렬
answer에 vector에 넣은 단어를 순서대로 삽입
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	vector<pair<char, string>> v;
	for (int i = 0; i<strings.size(); i++) {
		v.push_back(make_pair(strings[i][n], strings[i]));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i<v.size(); i++) {
		answer.push_back(v[i].second);
	}
	return answer;
}