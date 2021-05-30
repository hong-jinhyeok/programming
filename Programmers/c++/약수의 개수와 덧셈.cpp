/*
프로그래머스 약수의 개수와 덧셈
약수의 개수를 파악하는 함수를 만들어 사용.
짝수개면 true 홀수면 false 반환.
그에 따라 덧셈과 뺄셈을 진행.
*/
#include <string>
#include <vector>

using namespace std;

bool check(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0) count++;
    }
    if(count%2==0) return true;
    else return false;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i=left; i<=right; i++){
        if(check(i)) answer+=i;
        else answer-=i;
    }
    return answer;
}
