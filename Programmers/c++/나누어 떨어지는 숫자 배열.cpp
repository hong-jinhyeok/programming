/*
프로그래머스 나누어 떨어지는 숫자 배열
나눴을 때 나머지가 0이면 vector에 담고
마지막에 sort.
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	for (int i = 0; i<arr.size(); i++) {
		if (arr[i] % divisor == 0) answer.push_back(arr[i]);
	}
	if (answer.size() == 0) answer.push_back(-1);
	else sort(answer.begin(), answer.end());
	return answer;
}