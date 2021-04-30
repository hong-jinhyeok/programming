/*
프로그래머스 크레인 인형뽑기 게임
2차원 배열값으로 인형의 위치와 종류가 주어지고 1차원 배열로 뽑는 순서가 주어짐.
인형이 있는 위치를 반복문을 통해 찾음->0이 아닌 위치
스택에 인형이 없거나 top의 인형과 다르다면 push
같다면 pop 동작+answer은 +2
작업이 끝난 인형은 0으로 초기화->인형이 없는 위치는 0
*/
import java.util.*;
class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        int blen=board.length;
        Stack<Integer> s=new Stack<>();
        for(int i=0; i<moves.length; i++){
            int n=moves[i]-1;
            int j=0;
            while(j<blen-1 && board[j][n]==0) j++;
            if(board[j][n]==0) continue;
            else {
                if(s.isEmpty()){
                    s.add(board[j][n]);
                }else{
                    if(s.peek()==board[j][n]){
                        answer+=2;
                        s.pop();
                    }else{
                        s.add(board[j][n]);
                    }
                }
                board[j][n]=0;
            }
            
        }
        return answer;
    }
}
