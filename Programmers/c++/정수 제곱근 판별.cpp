/*
프로그래머스 정수 제곱근 판별
제곱근을 구할 땐 sqrt를 제곱을 구할 땐 pow를 사용할 줄 아냐고 묻는 문제
간단하게 sqrt로 제곱인 수인지를 판별
*/
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);
    if(a*a==n){
        answer=(a+1)*(a+1);
    }else{
        answer=-1;
    }
    return answer;
}
