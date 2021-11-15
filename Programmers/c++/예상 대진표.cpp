/*
프로그래머스 예상 대진표
a와 b가 만날 조건
1. 두 수의 차이가 1
2. 두 수중 큰 숫자가 2의 배수
2개의 조건이 만족 될 때까지 다음을 반복
숫자가 짝수가 아니라면 1을 더함
숫자를 2로 나눈 몫으로 초기화 후 다시 조건 판별
*/
#include <iostream>
#include<cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    while(1) {
        int m = a>b?a:b;
        if(abs(a-b) == 1 && m%2==0) {
            break;
        }else{
            if(a%2==1) a++;
            if(b%2==1) b++;
            a/=2;
            b/=2;
            answer++;
        }
    }
    

    return answer;
}
