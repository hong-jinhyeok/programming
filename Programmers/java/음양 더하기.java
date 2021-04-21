/*
프로그래머스 음양 더하기
vector에 있는 수를 true일 땐 더하고
false일 땐 빼며 연산
*/
class Solution {
    public int solution(int[] absolutes, boolean[] signs) {
        int answer = 0;
        for(int i=0; i<absolutes.length; i++){
            if(signs[i]==true) answer+=absolutes[i];
            else answer-=absolutes[i];
        }
        return answer;
    }
}
