/*
프로그래머스 음양 더하기
vector에 있는 수를 true일 땐 더하고
false일 땐 빼며 연산
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for(int i=0; i<absolutes.size(); i++){
        if(signs[i]==true) answer+=absolutes[i];
        else answer-=absolutes[i];
    }
    return answer;
}
