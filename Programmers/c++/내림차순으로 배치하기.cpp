/*
프로그래머스 내림차순으로 배치하기
sort를 이용한 내림차순 정렬
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = s;
	sort(answer.begin(), answer.end(), greater<>());
	return answer;
}