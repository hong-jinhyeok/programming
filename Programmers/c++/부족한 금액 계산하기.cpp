/*
프로그래머스 부족한 금액 계산하기
조건에 맞게 연산
주의 - 자료형을 맞춰야함
*/
#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long p = (long long)price;
    long long m = (long long)money;
    long long c = (long long)count;
    long long s=0;
    for(long long i=1; i<=c; i++){
        s+=(p*i);
    }
    if(s>m) answer=s-m;
    
    return answer;
}
