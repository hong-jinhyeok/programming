/*
프로그래머스 두 정수 사이의 합
두 정수 사이의 합은 두수를 더한갑과 뺀값+1의 곱을 2로 나눈 것과 같음
*/

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long max= a>b?a:b;
    long long min=a<b?a:b;
    answer= (max + min) * (max - min + 1) / 2;
    return answer;
}
