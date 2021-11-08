/*
프로그래머스 [1차] 뉴스 클러스터링
문자열을 모두 대문자 혹은 소문자로 변환
str1의 문자열을 유효한 단위로 쪼개고 map에 삽입, 유효하게 쪼개진 문자열을 카운트 => 집합 A의 크기
str2의 문자열을 유효한 단위로 쪼개면서 map에 있는지 확인
-> 있다면 map의 유효한 개수를 차감
-> 없다면 따로 카운트(순수B의 원소)
나온 교집합과 합집합(집합A의 크기 + 순수B의 원소)로 연산 실행
*/
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

bool check(char a) {
	if ('A' <= a && a <= 'Z') return true;
	return false;
}

int solution(string str1, string str2) {
	int answer = 0;
	transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
	transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
	map<string, int> m;
	int str1len = 0;
	for (int i = 0; i < str1.length() - 1; i++) {
		if (check(str1[i]) && check(str1[i + 1])) {
			string s = str1.substr(i, 2);
			if (m.find(s) == m.end()) {
				m.insert(make_pair(s, 1));
			}
			else {
				m[s]++;
			}
			str1len++;
		}
	}
	int maxN = 0, minN = 0;
	for (int i = 0; i < str2.length() - 1; i++) {
		if (check(str2[i]) && check(str2[i + 1])) {
			string s = str2.substr(i, 2);
			if (m.find(s) == m.end()) {
				maxN++;
			}
			else {
				if (m[s] > 0) {
					minN++;
					m[s]--;
				}
				else {
					maxN++;
				}
			}
		}
	}
	double an;
	cout << minN << " " << maxN << endl;
	if (minN == 0 && (maxN + str1len)==0) an = 1;
	else an = (double)minN / (double)(maxN + str1len);
	answer = an * 65536;
	return answer;
}
