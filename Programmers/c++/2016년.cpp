/*
프로그래머스 2016년
각 월에 해당하는 일 수를 배열에 저장.
a월 전까지의 일수를 다 더하고 b를 더함.
7로 나누었을 때 1==금 으로시작해 차례로 2==토, 3==일로 계산함.
금~목까지가 반복이기 때문.
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