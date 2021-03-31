/*
프로그래머스 타겟 넘버
주어진 수들로 target과 같은 수를 만들 수 있는 경우의 수 찾기
input의 범위가 크지 않으므로 queue를 이용하여 모든 경우를 탐색
하나의 숫자로 할 수 있는 경우->더하거나 빼기를 반복
모든 경우의 수를 구한 다음 target과 같은 수를 count
*/
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<int> q,q_s;
    q.push(numbers[0]);
    q.push(numbers[0]*-1);
    for(int i=1; i<numbers.size(); i++){
        while(!q.empty()){
            int n=q.front();
            q.pop();
            q_s.push(n+numbers[i]);
            q_s.push(n-numbers[i]);
        }
        swap(q,q_s);
    }
    while(!q.empty()){
        int n=q.front();
        q.pop();
        if(n==target) answer++;
    }
    return answer;
}
