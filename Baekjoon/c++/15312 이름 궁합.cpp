/*
백준 15312 이름 궁합
각 이름의 획순을 저장한 후 
하나의 배열에 번갈아가며 저장
하나의 문자열을 이용해 i번째와 i+1번째를 더해가며 i번째를 초기화 후 10으로 나눈 나머지로 다시 초기화
자리수가 2남으면 덧셈 종료
문자열로 출력
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int arr[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
	string s1, s2;
	cin >> s1 >> s2;
	int name1[2000] = { 0, };
	int name2[2000] = { 0, };
	for (int i = 0; i < s1.length(); i++) {
		name1[i] = arr[s1[i] - 'A'];
		name2[i] = arr[s2[i] - 'A'];
	}
	int answer[4000] = { 0, };
	int idx = s1.length();
	for (int i = 0; i < idx; i++) {
		answer[i*2] = name1[i];
		answer[i*2+1] = name2[i];
	}
	idx*=2;
	while (idx > 2) {
		for (int i = 0; i < idx-1; i++) {
			answer[i] = answer[i] + answer[i+1];
			answer[i] %= 10;
		}
		idx--;
	}
	string as = "";
	as.push_back(answer[0] + '0');
	as.push_back(answer[1] + '0');
	cout << as;
	return 0;
}
