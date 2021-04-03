/*
���� 2776 �ϱ��
�̺�Ž�� stl�� �̿��Ͽ� �ذ�.
�̺� Ž�� ���� sort�� �ؾ���.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	while (n>0) {
		int n1, n2;
		vector<int> v;
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
			if (binary_search(v.begin(), v.end(), a) == true) cout << "1\n";
			else cout << "0\n";
		}
		n--;
	}
	return 0;
}