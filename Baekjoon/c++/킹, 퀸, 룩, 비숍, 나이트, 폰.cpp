/*
백준 3003 킹, 퀸, 룩, 비숍, 나이트, 폰
배열 2개를 선언
입력받을 배열과 체스 말의 개수를 저장하는 배열
입력받은 후 체스-입력값을 출력
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