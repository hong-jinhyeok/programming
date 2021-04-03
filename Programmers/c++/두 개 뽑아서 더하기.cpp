/*
프로그래머스 두 개 뽑아서 더하기
숫자 2개를 뽑아서 더한 수들을 오름차순으로 반환.
이중 반복문을 통해 모든 경우의 수를 구하고 map key값의 특성을 이용하여 중복 해결.
map의 key값들을 answer에 입력.
*/
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	map<int, int> m;
	for (int i = 0; i<numbers.size() - 1; i++) {
		for (int j = i + 1; j<numbers.size(); j++) {
			int a = numbers[i] + numbers[j];
			if (m.find(a) == m.end()) {
				m.insert(make_pair(a, 1));
			}
		}
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		answer.push_back(i->first);
	}
	return answer;
}