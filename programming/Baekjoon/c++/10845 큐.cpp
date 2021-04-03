/*
���� 10845 ť
vector�� �̿��Ͽ� queue�� ����.
index���� �̿��Ͽ� pop�� ����� ����->index�� +1�� ���ִ� ���
push�� pop�� �����ϰ�� ��� ���ڸ� ���縵�� �޶� s[0]�� �������� ����
push�� pop�� ���̸� �̿��Ͽ� ��ɾ �Ǻ�.
substr�� stoi�� �̿��Ͽ� �������� ��ȯ
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