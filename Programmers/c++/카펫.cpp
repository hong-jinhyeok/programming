/*
프로그래머스 카펫
갈색과 노란색 칸의 수를 더해 전체 사각형의 크기를 알아냄
알아낸 사각형의 크기로 가로와 세로의 경우의 수를 판별
(가로-2) * (세로-2) = 노란색 칸의 수가 나오는 짝을 찾아서 반환
*/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	vector<pair<int, int>> v;
	int square = brown + yellow;
	int num = 3;
	while (num <= square / num) {
		if (square%num != 0) {
			num++;
			continue;
		}
		else {
			v.push_back(make_pair(num, square / num));
			num++;
		}
	}
	for (int i = 0; i<v.size(); i++) {
		int a = v[i].first - 2;
		int b = v[i].second - 2;
		if (yellow == a*b) {
			answer.push_back(v[i].second);
			answer.push_back(v[i].first);
			break;
		}
	}
	return answer;
}