/*
프로그래머스 자릿수 더하기
반복문을 통해 n이 0이 될 때까지 10으로 나눈 값으로 초기화 해주면서 매 턴마다 10으로 나눈 나머지를 더해줌
*/
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while(n>0){
        answer+=(n%10);
        n/=10;
    }

    return answer;
}
