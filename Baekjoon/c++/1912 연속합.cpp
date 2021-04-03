/*
백준 1912 연속합
vector를 사용
연솝합의 핵심->더했을 때 양수면 지켜보아야하고 음수면 다시 0부터 시작하여 더하기
실제 더했을 때 양수가 나오는 경우는 다른 vector에 추가
0을 추가하는 vector는 연속합의 조건 때문에 0을 임의로 삽입하기 때문
양수만 넣은 vector에 주어진 수들을 삽입 후 정렬
가장 큰 수를 출력
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v, fv, ffv;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	fv.push_back(v[0]);
	for (int i = 1; i<n; i++) {
		if (fv[i - 1] + v[i] > 0) {
			fv.push_back(fv[i - 1] + v[i]);
			ffv.push_back(fv[i - 1] + v[i]);
		}
		else {
			fv.push_back(0);
		}
	}
	for (int i = 0; i<n; i++) {
		ffv.push_back(v[i]);
	}
	sort(ffv.begin(), ffv.end());
	cout << ffv[ffv.size() - 1];
	return 0;
}