/*
백준 2447 별 찍기 - 10
재귀함수를 이용하여 해결.
재귀함수를 쓰는 이유는 규칙을 완성시키기 위해서는 
입력하는 별의 수 n에 대하여 /3한 값을 계속해서 입력으로 넣어주며
조건에 만족할 때까지 실행해야하기 때문.
규칙 1. (i%3==1, j%3==1)의 자리는 모두 공백
규칙 2. 규칙1에 걸리지 않고 /3 했을 때 0이 나오는 차례라면 *을 출력
규칙 3. 가운데 공백은 크기도 위치도 차원이 제곱으로 커짐
		-> 차원을 줄여주며 찾기 
		-> /3을 하며 차원을 줄이는 재귀를 통해 위치의 문자가 공백인지 판별
*/
#include <iostream>
#include <string>
using namespace std;

void print(int i, int j, int n)
{
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << ' ';
	}
	else
	{
		if (n / 3 == 0)
			cout << '*';
		else
			print(i, j, n / 3);
	}
	return;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			print(i, j, n);
		}
		cout << "\n";
	}
	return 0;
}

