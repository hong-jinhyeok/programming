/*
���α׷��ӽ� �Ǻ���ġ ��
DP�� ���.
1���� �迭�� ���� ����Ͽ� �����ϰ� answer�� n��° �Ǻ���ġ ���� ����
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int arr[100001] = { 0,1,1,0, };
	for (int i = 3; i<100001; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
	}
	answer = arr[n];
	return answer;
}