/*
프로그래머스 나머지가 1이 되는 수 찾기
반복문을 통해 나머지가 1이 되는 수중 가장 작은 수를 찾음
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<n; i++){
        if(n%i==1){
            answer=i;
            break;
        }
    }
    return answer;
}
