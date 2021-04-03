/*
프로그래머스 짝수와 홀수
2로 나누었을 때 나머지가 0이면 짝수
아니면 홀수로 입력
*/
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num%2==0) answer="Even";
    else answer="Odd";
    return answer;
}
