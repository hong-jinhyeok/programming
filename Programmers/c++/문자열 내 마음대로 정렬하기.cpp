/*
���α׷��ӽ� ���ڿ� �� ������� �����ϱ�
vector�� ������·� n��° ���ڿ� �� �ܾ ����
sort�� ����
answer�� vector�� ���� �ܾ ������� ����
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