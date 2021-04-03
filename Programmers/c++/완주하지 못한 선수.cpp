/*
프로그래머스 완주하지 못한 선수
완주하지 못한 1명만 찾으면 됨.
sort하여 completion의 이름 기준으로 하나씩 비교
이름이 달르다면 그 idx의 사람이 완주하지 못한 선수.
반복문이 끝났다면 participant의 마지막 선수가 완주하지 못한 선수.
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	int idx = 0;
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (idx = 0; idx<completion.size(); idx++) {
		if (completion[idx].compare(participant[idx]) != 0) {
			break;
		}
	}

	answer = participant[idx];
	return answer;
}