/*
프로그래머스 이진 변환 반복하기
매 반복문마다 0을 제외한 새로운 문자열을 생성.
생성된 문자열을 2진수로 변환->2로 나누며 나머지를 string에 append
->최종 string을 reverse
1이 될 때까지 변환
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string num2(int n) {
	string s = "";
	while (n>0) {
		s += to_string(n % 2);
		n /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}
vector<int> solution(string s) {
	vector<int> answer;
	string ss = s;
	int trans = 0;
	int zero = 0;
	while (ss.length()>1) {
		trans++;
		string rs = "";
		for (int i = 0; i<ss.length(); i++) {
			if (ss[i] == '1') rs.push_back('1');
			else {
				zero++;
			}
		}
		int l = rs.length();
		ss = num2(l);
	}
	answer.push_back(trans);
	answer.push_back(zero);
	return answer;
}