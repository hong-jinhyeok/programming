/*
���� 1912 ������
vector�� ���
�������� �ٽ�->������ �� ����� ���Ѻ��ƾ��ϰ� ������ �ٽ� 0���� �����Ͽ� ���ϱ�
���� ������ �� ����� ������ ���� �ٸ� vector�� �߰�
0�� �߰��ϴ� vector�� �������� ���� ������ 0�� ���Ƿ� �����ϱ� ����
����� ���� vector�� �־��� ������ ���� �� ����
���� ū ���� ���
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v, fv, ffv;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	fv.push_back(v[0]);
	for (int i = 1; i<n; i++) {
		if (fv[i - 1] + v[i] > 0) {
			fv.push_back(fv[i - 1] + v[i]);
			ffv.push_back(fv[i - 1] + v[i]);
		}
		else {
			fv.push_back(0);
		}
	}
	for (int i = 0; i<n; i++) {
		ffv.push_back(v[i]);
	}
	sort(ffv.begin(), ffv.end());
	cout << ffv[ffv.size() - 1];
	return 0;
}