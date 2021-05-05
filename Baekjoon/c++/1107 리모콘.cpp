/*
백준 1107 리모콘
채널이동방법 4가지
1. 숫자키로 이동하기
2. 숫자키로 가장 인접한 큰 채널로 이동해서 채널 내리기
3. 숫자키로 가장 인접한 작은 채널로 이동해서 채널 올리기
4. 채널 올리기 or 내리기로 이동
4가지 방법 중 가장 작은 방법을 선택
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool checkChannel(bool* key, int channel) { // 숫자키로 이동가능한 채널인지
	int ch = channel;
	if (ch == 0) {
		if (key[0] == true) return false;
		else return true;
	}
	while (ch > 0) {
		if (key[ch % 10] == true) return false;
		ch /= 10;
	}
	return true;
}

int increaseNum(bool* key, int channel) { // 이동채널이랑 인접한 큰 채널찾기
	int ch = channel;
	while (ch < 1000000) {
		if (checkChannel(key, ch) == true) {
			break;
		}
		else {
			ch++;
		}
	}
	return ch;
}

int decreaseNum(bool* key, int channel) { // 이동채널이랑 인접한 작은 채널찾기
	int ch = channel;
	while (ch > -1) {
		if (checkChannel(key, ch) == true) {
			return ch;
		}
		else {
			ch--;
		}
	}
	return 10000000;
}

int main() {
	int channel;
	bool key[10] = { false, };
	int fail_key;
	cin >> channel >> fail_key;
	for (int i = 0; i < fail_key; i++) {
		int a;
		cin >> a;
		key[a] = true;
	}
	int incNum = increaseNum(key, channel); // 이동채널과 가장 가까운 증가된 채널
	incNum = to_string(incNum).length() + abs(channel - incNum);
	int decNum = decreaseNum(key, channel); // 이동채널과 가장 가까운 감소된 채널
	decNum = to_string(decNum).length() + abs(channel - decNum);
	int directMove = 99999999; // 숫자키로 이동 가능한지
	if (checkChannel(key, channel) == true) directMove = to_string(channel).length();
	int MoveKey = abs(channel - 100); // 이동키로만 이동했을 때
	int minkey = incNum;
	if (minkey > decNum) minkey = decNum;
	if (minkey > directMove) minkey = directMove;
	if (minkey > MoveKey) minkey = MoveKey;
	cout << minkey << "\n";
	return 0;
}
