/*
프로그래머스 3진법 뒤집기
vector에 3으로 나눈 나머지를 저장하면서 n을 3으로 나눈 몫으로 초기화
vector의 끝부터 수를 가져오면 3진법 수를 거꾸로 한자리씩 가져오는 모양이 됨
곱해지는 수는 1부터 시작해 3진법 수와 곱해서 answer에 더하고 3씩 곱함
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	int n3 = n;
	while (n3>0) {
		v.push_back(n3 % 3);
		n3 /= 3;
	}
	int k3 = 1;
	for (int i = v.size() - 1; i >= 0; i--) {
		answer += (v[i] * k3);
		k3 *= 3;
	}
	return answer;
}