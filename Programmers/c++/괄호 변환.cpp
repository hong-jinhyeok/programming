/*
프로그래머스 괄호 변환
해당 답안인 Solution을 재귀로 활용
빈문자열이 입력값으로 들어오면 빈문자열을 return.
빈문자열이 아니라면 다음을 수행
처음 u는 '('와 ')'이 개수가 동일하게 들어도록 삽입
나머지는 v에 삽입
u가 밸런싱된 문자열이라면 v를 Solution으로 한 결과를 u에 이어 붙임
u가 밸런싱된 문자열이 아니라면 '(' + Solution(v) + ')' 하고 앞뒬 문자를 뺀 u를 규칙에 맞게 바꾸어 뒤에 이어붙임.
*/
#include <string>
#include <vector>

using namespace std;

string solution(string p) {
	string answer;
	if (p.length() == 0) return answer;
	string u = "";
	string v = "";
	int check = 0;
	int balance = 0;
	for (int i = 0; i < p.length(); i++) {
		if (check==0 && balance==0 && p[i]==')') check = 1;
		if ((check == 0 || u.length() == 0) || balance != 0) {
			if (p[i] == '(') {
				u.push_back(p[i]);
				balance++;
			}
			else if (p[i] == ')') {
				u.push_back(p[i]);
				balance--;
			}
		}
		else {
			v.push_back(p[i]);
		}
	}
	if (u[0] == '(' && u[u.length() - 1] == ')') {
		answer = u + solution(v);
	}
	else {
		answer = "(" + solution(v) + ")";
		for (int i = 1; i <= u.length() - 2; i++) {
			if (u[i] == '(') answer.push_back(')');
			else answer.push_back('(');
		}
	}
	return answer;
}
