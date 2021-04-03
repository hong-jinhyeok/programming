/*
프로그래머스 K번째수
새로운 벡터에 array에서 골라야하는 숫자들을 삽입.
sort 후 k번 째 수만 answer에 삽입.
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