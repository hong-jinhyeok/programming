/*
���α׷��ӽ� K��°��
���ο� ���Ϳ� array���� �����ϴ� ���ڵ��� ����.
sort �� k�� ° ���� answer�� ����.
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	int n = commands.size();
	for (int a = 0; a<n; a++) {
		vector<int> arr;
		for (int i = commands[a][0] - 1; i<commands[a][1]; i++) {
			arr.push_back(array[i]);
		}
		sort(arr.begin(), arr.end());
		answer.push_back(arr[commands[a][2] - 1]);
	}
	return answer;
}