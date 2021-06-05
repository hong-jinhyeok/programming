/*
프로그래머스 소수 찾기
에라스토테네스의 체를 사용.
에라스토테네스의 체 -> 소수를 찾고 소수의 배수의 수를 모두 제거하는 방식.
*/
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
	bool number[1000001] = { 0, };
	for (int i = 0; i <= n; i++) number[i] = 1;

	for (int i = 2; i <= sqrt(n); i++) {
		if (number[i] == 0) continue;
		for (int j = i * i; j <= n; j += i) {
			number[j] = 0;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (number[i] != 0) v.push_back(i);
	}
    answer=v.size();
    return answer;
}
