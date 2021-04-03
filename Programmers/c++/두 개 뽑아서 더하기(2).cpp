/*
프로그래머스 두 개 뽑아서 더하기
숫자 2개를 뽑아서 더한 수들을 오름차순으로 반환.
이중 반복문을 통해 모든 경우의 수를 구하고 bool 배열을 선언하여 더한 값을 index로 하여금 이미 나온 것인지 중복을 판별.
마지막에 sort함수를 통해 오름차순 정렬.
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	bool visit[201] = { false, };
	for (int i = 0; i<numbers.size() - 1; i++) {
		for (int j = i + 1; j<numbers.size(); j++) {
			int a = numbers[i] + numbers[j];
			if (visit[a] == false) {
				answer.push_back(a);
				visit[a] = true;
			}
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}