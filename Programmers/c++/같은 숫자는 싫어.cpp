/*
프로그래머스 같은 숫자는 싫어
첫 숫자는 삽입.
두번 째부터는 벡터의 마지막 삽입 숫자와 비교하면서 다를 경우 삽입
*/
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	answer.push_back(arr[0]);

	for (int i = 1; i<arr.size(); i++) {
		if (answer[answer.size() - 1] != arr[i]) answer.push_back(arr[i]);
	}

	return answer;
}