/*
���� 1181 �ܾ� ����
vector���� �̿��� ���.
pair ���·� �ܾ� <����, �ܾ�>�� ����
sort�� ����Ͽ� ����->���̿켱, ���̰� ������ �ܾ� ������ �迭������ ����
��½� �ߺ��� �����ؼ� ���
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
	
	vector<pair<int, string>> vp;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		vp.push_back(make_pair(s.length(), s));
	}
	sort(vp.begin(), vp.end());
	string s="";
	for (int i = 0; i < vp.size(); i++) {
		if(s.compare(vp[i].second) != 0)cout << vp[i].second << "\n";
		s = vp[i].second;
	}
	return 0;
}
