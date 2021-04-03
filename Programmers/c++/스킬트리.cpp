/*
프로그래머스 스킬트리
선행스킬을 배워야만 배울 수 있다는 특징
-> 선행스킬들로 지정되어있는 스킬들은 순서가 정해져 있음
선행스킬로 주어진 애들만 골라 내어 순서를 비교
순서가 맞다면 answer+1
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	bool skcheck[26] = { false, };
	for (int i = 0; i<skill.length(); i++) {
		//cout << skill[i]-'A'<<endl;
		skcheck[skill[i] - 'A'] = true;
	}
	for (int i = 0; i<skill_trees.size(); i++) {
		string s = "";
		for (int j = 0; j<skill_trees[i].length(); j++) {
			if (skcheck[skill_trees[i][j] - 'A'] == true) s.push_back(skill_trees[i][j]);
		}
		int check = 0;
		for (int j = 0; j<s.length(); j++) {
			if (skill[j] != s[j]) {
				check = 1;
				break;
			}
		}
		if (check == 0) answer++;
	}
	return answer;
}