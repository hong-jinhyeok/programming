/*
���α׷��ӽ� ���ڿ� �� p�� y�� ����
�ݺ����� ���� p�� y�� ������ ���� count
���� true false ��ȯ
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