/*
백준 5430 AC
deque를 사용.
문자열로 받은 숫자들을 모두 분리하여 deque에 넣고 R을하면 반대로 읽고 pop하며
다시 R하면 정방향으로 읽고 pop하는 형식으로 해결
error 경우는 D의 수행이 이루어지지 않을 때 error
모든 동작 수행 후 deque가 비었을 때도 실행 가능
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t > 0) {
		string s1, s2;
		cin >> s1;
		int n;
		cin >> n;
		cin >> s2;
		deque<int> v;
		string ss = "";
		for (int i = 1; i < s2.length(); i++) {
			if (s2[i] == ',' || s2[i] == ']') {
				if (s2[i] == ']'&& ss.length() == 0) continue;
				v.push_back(stoi(ss));
				ss = "";
			}
			else {
				ss.push_back(s2[i]);
			}
		}
		int check = 0;
		int turn = 1;
		//reverse(v.begin(), v.end());
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] == 'R') turn *= -1;
            else if (s1[i] == 'R' && v.size() == 0) {
				cout << "error\n";
				check = 1;
				break;
			}
			else if (s1[i] == 'D' && v.size() == 0) {
				cout << "error\n";
				check = 1;
				break;
			}
			else {
				if(turn==1)	v.pop_front();
				else v.pop_back();
			}
		}
		if (check == 0) {
			cout << "[";
			if (turn == -1) {
				for (int i = v.size() - 1; i >= 0; i--) {
					if (i == 0) cout << v[i];
					else cout << v[i] << ",";
				}
			}
			else {
				for (int i = 0; i <v.size(); i++) {
					if (i == v.size()-1) cout << v[i];
					else cout << v[i] << ",";
				}
			}
            cout << "]\n";
		}
		t--;
	}
}
