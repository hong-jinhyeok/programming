/*
프로그래머스 이중우선순위큐
벡터를 이용한 이중운선순위큐 구현
앞에 문자에 따라 동작 구현
I->2번째부터 끝까지 문자열을 int형으로 변환 밑 삽입
D->3번째 문자열이 1이면 오름차순 정렬 후 pop back 아니면 내림차순 정렬 후 pop back
최종 vector를 정렬한 후 최대 값과 최소 값을 answer에 삽입
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> operations) {
	vector<int> answer;
	vector<int> v;
	for (int i = 0; i<operations.size(); i++) {
		if (operations[i][0] == 'I') {
			v.push_back(stoi(operations[i].substr(2, operations[i].length() - 2)));
		}
		else if (v.size() == 0) {
			continue;
		}
		else if (operations[i][0] == 'D' && operations[i][2] == '1') {
			sort(v.begin(), v.end());
			v.pop_back();
		}
		else {
			sort(v.begin(), v.end(), greater<>());
			v.pop_back();
		}
	}
	if (v.size() == 0) {
		answer.push_back(0);
		answer.push_back(0);
	}
	else {
		sort(v.begin(), v.end());
		answer.push_back(v[v.size() - 1]);
		answer.push_back(v[0]);
	}
	return answer;
}