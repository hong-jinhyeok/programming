/*
백준 10845 큐
vector를 이용하여 queue를 구현.
index값을 이용하여 pop의 기능을 구현->index를 +1씩 해주는 방법
push와 pop을 제외하고는 모두 앞자리 스펠링이 달라 s[0]의 구별법을 쓰고
push와 pop은 길이를 이용하여 명령어를 판별.
substr과 stoi를 이용하여 정수값을 변환
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v;
	int n;
	cin >> n;
	int index = 0;
	while (n > 0) {
		string s;
		getline(cin, s);
		if (s.length() < 1) continue;
		if (s[0] == 'p' && s.length() == 3) {
			if (v.size() == index) cout << "-1\n";
			else {
				cout << v[index] << "\n";
				index++;
			}
		}
		else if (s[0] == 'p') {
			v.push_back(stoi(s.substr(5, s.length() - 5)));
		}
		else if (s[0] == 's') cout << v.size() - index <<"\n";
		else if (s[0] == 'e') {
			if (v.size() == index) cout << "1\n";
			else cout << "0\n";
		}
		else if(s[0]=='f') {
			if (v.size() == index) cout << "-1\n";
			else cout << v[index] << "\n";
		}
		else if (s[0] == 'b') {
			if (v.size() == index) cout << "-1\n";
			else cout << v[v.size()-1] << "\n";
		}
		n--;
	}
	return 0;
}