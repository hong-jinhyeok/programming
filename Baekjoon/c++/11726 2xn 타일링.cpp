/*
���� 11726 2xn Ÿ�ϸ�
DP�� ����Ͽ� �ذ�.
1���� �迭�� �̿��Ͽ� �ذ�.
������ ���� ���̰� 1�ڸ��� �ٿ��� �ϼ��Ǵ� ��� + 2�ڸ��� �ٿ��� �ϼ��Ǵ� ���� ����.
��� a[i]=a[i-1]+a[i-2]�� ������ �� ����.
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[1001];
	arr[0] = 1; arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cout << arr[n] << "\n";
	return 0;
}
