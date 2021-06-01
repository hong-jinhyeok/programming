/*
프로그래머스 멀쩡한 사각형
직사각형에서 대각선으로 그을시 멀쩡한 사각형의 개수
-> w*h - (w/최대공약수 + h/최대공약수 -1) * 최대공약수
*/
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long solution(int w,int h) {
    long long answer = 0;
    int nw=w/gcd(w,h);
    int nh=h/gcd(w,h);
    long long m = (long long)(nw+nh-1) * (long long)gcd(w,h);
    answer=(long long)w*(long long)h - m;
    return answer;
}
