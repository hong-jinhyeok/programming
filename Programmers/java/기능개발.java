/*
프로그래머스 기능개발
queue를 사용하여 해결.
task=process가 끝나는데 걸리는 일 수
현재 task가 다음 프로세스의 task보다 작다면 배포
*/
import java.util.*;
class Solution {
    public ArrayList<Integer> solution(int[] progresses, int[] speeds) {
        ArrayList<Integer> answer = new ArrayList<Integer>();
        Queue<Integer> q = new LinkedList<>();
        for(int i=0; i<progresses.length; i++){
            int task=100-progresses[i];
            if(task%speeds[i]==0) q.offer(task/speeds[i]);
            else q.offer(task/speeds[i] + 1);
        }
        int process=1;
        int task=q.poll();
        while(!q.isEmpty()){
            int fr=q.poll();
            if(task < fr){
                task=fr;
                answer.add(process);
                process=1;
            }else{
                process++;
            }
        }
        answer.add(process);
        return answer;
    }
}
