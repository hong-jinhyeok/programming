/*
���� 1676 ���丮�� 0�� ����
���丮�� ���� ���� ��� ���ӵ� 0�� �ִ��� ���ϴ� ����.
0�� ����� -> 10�� �¼��� ��������.
10���� �����鼭 0�� ������ ����.
������ ���� -> long long int�ε� ���� ǥ���� �ȵ� ��ŭ ũ��.
�ʿ��Ѱ� ���� ��� ���� �ʿ�
������� ū ��(ex. 100000)�� ���� �������θ� ����� �̾����.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	int facto = 1;
	int count = 0;
	cin >> n;
	while (n > 0) {
		facto *= n;
		while (facto > 0 && facto % 10 == 0) {
			count++;
			facto /= 10;
		}
		if (facto > 100000) {
			facto %= 100000;
		}
		n--;
	}
	
	
	cout << count << "\n";
	return 0;
}
