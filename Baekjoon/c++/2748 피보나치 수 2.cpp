/*
���� 2748 �Ǻ���ġ �� 2
DP�� Ȱ��.
�ִ� 90������ ���� �޾ƿ��� ������ �迭�� 91�� ����.
a1=a2=1�� �����ϰ� �迭�� ���� ���� ä��.
int�� ���� �Ѿ�� ������ long long���� �ذ�.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long arr[91] = { 0,1,1, };
	for (int i = 3; i<91; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int n;
	cin >> n;
	cout << arr[n];
}