/*
프로그래머스 x만큼 간격이 있는 n개의 숫자
반복문을 통해 해당 숫자를 answer에 push
*/
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int i=0; i<n; i++){
        answer.push_back(x*(i+1));
    }
    return answer;
}
