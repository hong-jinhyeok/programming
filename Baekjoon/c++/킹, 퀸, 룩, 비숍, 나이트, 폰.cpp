/*
���� 3003 ŷ, ��, ��, ���, ����Ʈ, ��
�迭 2���� ����
�Է¹��� �迭�� ü�� ���� ������ �����ϴ� �迭
�Է¹��� �� ü��-�Է°��� ���
*/
#include <iostream>
using namespace std;

int main() {
	int arr[6];
	int chess[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i<6; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i<6; i++) {
		cout << chess[i] - arr[i] << " ";
	}
	return 0;
}