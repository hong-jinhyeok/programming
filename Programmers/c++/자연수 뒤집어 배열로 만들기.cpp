/*
프로그래머스 자연수 뒤집어 배열로 만들기
반복문을 통해 n이 0보다 크다면 10으로 나눈 나머지를 answer에 push
n은 10으로 나눈 수로 다시 초기화
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(n>0){
        answer.push_back(n%10);
        n/=10;
    }
    return answer;
}
