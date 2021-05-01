/*
프로그래머스 타겟 넘버
주어진 수들로 target과 같은 수를 만들 수 있는 경우의 수 찾기
input의 범위가 크지 않으므로 queue를 이용하여 모든 경우를 탐색
하나의 숫자로 할 수 있는 경우->더하거나 빼기를 반복
모든 경우의 수를 구한 다음 target과 같은 수를 count
*/
import java.util.*;
class Solution {
    public int solution(int[] numbers, int target) {
        int answer = 0;
        Queue<Integer> q=new LinkedList<>();
        q.offer(numbers[0]);
        q.offer(numbers[0]*-1);
        for(int i=1; i<numbers.length; i++){
            Queue<Integer> sq=new LinkedList<>();
            while(!q.isEmpty()){
                int n=q.poll();
                sq.offer(n+numbers[i]);
                sq.offer(n-numbers[i]);
            }
            q=sq;
        }
        while(!q.isEmpty()){
            int n=q.poll();
            if(n==target) answer++;
        }
        return answer;
    }
}
