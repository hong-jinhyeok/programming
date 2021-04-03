/*
프로그래머스 문자열 내 p와 y의 개수
반복문을 통해 p와 y의 개수를 따로 count
비교후 true false 반환
*/
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int p = 0, y = 0;
	for (int i = 0; i<s.length();i++) {
		if (s[i] == 'p' || s[i] == 'P') p++;
		else if (s[i] == 'y' || s[i] == 'Y') y++;
	}
	if (y == p) return true;
	return false;
}