/*
���α׷��ӽ� 2016��
�� ���� �ش��ϴ� �� ���� �迭�� ����.
a�� �������� �ϼ��� �� ���ϰ� b�� ����.
7�� �������� �� 1==�� ���ν����� ���ʷ� 2==��, 3==�Ϸ� �����.
��~������� �ݺ��̱� ����.
*/
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	int month[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	int num = 0;
	for (int i = 1; i<a; i++) {
		num += month[i];
	}
	num += b;
	if (num % 7 == 1) answer = "FRI";
	else if (num % 7 == 2) answer = "SAT";
	else if (num % 7 == 3) answer = "SUN";
	else if (num % 7 == 4) answer = "MON";
	else if (num % 7 == 5) answer = "TUE";
	else if (num % 7 == 6) answer = "WED";
	else if (num % 7 == 0) answer = "THU";
	return answer;
}