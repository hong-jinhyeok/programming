/*
프로그래머스 카펫
갈색과 노란색 칸의 수를 더해 전체 사각형의 크기를 알아냄
알아낸 사각형의 크기로 가로와 세로의 경우의 수를 판별
(가로-2) * (세로-2) = 노란색 칸의 수가 나오는 짝을 찾아서 반환 
*/
class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = {0,0};
        int rect=brown+yellow;
        int idx=3;
        while(true){
            if(rect%idx==0){
                int n=rect/idx;
                if((n-2)*(idx-2)==yellow) break;
            }
            idx++;
        }
        answer[0]=rect/idx;
        answer[1]=idx;
        return answer;
    }
}
