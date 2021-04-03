/*
���� 1316 �׷� �ܾ� üĿ
map�� find �Լ��� �̿�.
map�� ���� ���ڸ� �߰�
�ִٸ� ���� ���ڿ� ������ �Ǻ� 
-> ���� ���ڿ� ���ٸ� �Ѿ.
-> �ٸ��ٸ� �׷��� �ƴ�.
*/
#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		char ch=s[0];
		map<char, int> m;
		int check = 0;
		m.insert(make_pair(ch,1));
		for (int j = 1; j < s.length(); j++) {
			if (m.find(s[j]) == m.end()) {
				m.insert(make_pair(s[j], 1));
			}
			else if(s[j]!=ch) {
				check = 1;
				break;
			}
			ch = s[j];
		}
		if (check == 0) count++;
	}
	cout << count;
	return 0;
}
