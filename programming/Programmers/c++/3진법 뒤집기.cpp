/*
���α׷��ӽ� 3���� ������
vector�� 3���� ���� �������� �����ϸ鼭 n�� 3���� ���� ������ �ʱ�ȭ
vector�� ������ ���� �������� 3���� ���� �Ųٷ� ���ڸ��� �������� ����� ��
�������� ���� 1���� ������ 3���� ���� ���ؼ� answer�� ���ϰ� 3�� ����
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	int n3 = n;
	while (n3>0) {
		v.push_back(n3 % 3);
		n3 /= 3;
	}
	int k3 = 1;
	for (int i = v.size() - 1; i >= 0; i--) {
		answer += (v[i] * k3);
		k3 *= 3;
	}
	return answer;
}