/*
약수의 합
반복문을 통해 나누어 떨어지는 수들을 구하고 다 더함
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0) answer+=i;
    }
    return answer;
}
