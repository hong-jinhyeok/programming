/*
���� 10815 ���� ã��
�̺� Ž�� stl�� �̿��Ͽ� �ذ�
�̺� Ž���ϱ� �� vector�� sort����� ��.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n1, n2;

	cin >> n1;
	for (int i = 0; i < n1; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		int a;
		cin >> a;
		if (binary_search(v.begin(), v.end(), a) == true) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}
