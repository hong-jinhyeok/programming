/*
프로그래머스 콜라츠 추측
짝수면 2로 나누기
홀수면 3곱하고 1더하기
1일 나올 때까지 반복
int 형으로 계속 연산시 오버플로우가 발생
*/
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n=num;
    while(answer>-1){
        if(n==1) break;
        else if(answer==500){
            answer=-1;
            break;
        }
        else if(n%2==0){
            n/=2;
            answer++;
        }else{
            n*=3;
            n+=1;
            answer++;
        }
    }
    return answer;
}
