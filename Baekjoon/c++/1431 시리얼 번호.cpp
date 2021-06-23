/*
백준 1431 시리얼 번호
벡터에 이중 페어를 이용하여 해결
1. 첫번째 페어의 첫번째 값으로 문자열의 길이를 넣음
2. 첫번째 페어의 두전째 값으로는 페어를 넣음
3. 두번째 페어의 첫번째 값으로 문자열에 포함된 숫자의 합을 넣음
4. 두번째 페어의 두번째 값으로 문자열을 넣음.
조건 3-만약 1,2번 둘 조건으로도 비교할 수 없으면, 사전순으로 비교한다. 숫자가 알파벳보다 사전순으로 작다.
-> 문자열 자체를 오름차순으로 비교
sort를 이용하여 벡터를 오름차순으로 비교
*/
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int ToInt(string s) {
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if ('0' <= s[i] && s[i] <= '9') sum += (s[i] - '0');
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<pair<int, pair<int, string>>> v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(make_pair(s.length(), make_pair(ToInt(s), s)));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].second.second << "\n";
	}
	return 0;
}
