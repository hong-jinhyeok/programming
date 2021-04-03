/*
���� 1181 �ܾ� ����
map�� vector�� ����Ͽ� �ذ�.
map�� find�� �̿��Ͽ� �ߺ��ذ�
�ٸ� map�� �ڷᱸ���� �ܾ��� ���̸� key������ �Ͽ��� ����
��� ���� value�� vector���� ���� �� ���
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> m;
	map<int, vector<string>> m2;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		if (m.find(s) == m.end()) {
			m.insert(make_pair(s, s.length()));
		}
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if (m2.find(it->second) == m2.end()) {
			vector<string> v;
			v.push_back(it->first);
			m2.insert(make_pair(it->second, v));
		}
		else {
			m2[it->second].push_back(it->first);
		}
	}
	for (auto it = m2.begin(); it != m2.end(); it++) {
		vector<string> v = it->second;
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}
	return 0;
}
