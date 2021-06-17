/*
백준 11399 ATM
가장 적은 시간이 걸리는 사람부터 뽑으면 됨.
sort 후 두번째 사람부터는 이전 사람이 걸린 시간을 + 해줌.
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> answer;
	int an = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		answer.push_back(a);
	}
	sort(answer.begin(), answer.end());
	for (int i = 1; i < answer.size(); i++) {
		answer[i] += answer[i - 1];
	}
	for(int i=0; i<answer.size(); i++) an+= answer[i];
	cout << an;
	return 0;
}
