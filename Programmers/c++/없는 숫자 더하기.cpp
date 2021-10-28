/*
프로그래머스 없는 숫자 더하기
0~9까지의 합 = 45
벡터에 있는 값들의 합을 45에서 빼면 없는 숫자들의 합
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i=0; i<numbers.size(); i++) answer+=numbers[i];
    
    return 45-answer;
}
