/*
프로그래머스 더 맵게
우선순위 큐를 사용하여 해결.
주의 케이스
1. 큐가 비였을 때
2. 큐의 원소가 하나로 통과할 때
3. 큐의 원소가 하나만 남아서 진행할 수 없을 때
이렇게의 케이스만 고려한다면 통과.
*/
import java.util.PriorityQueue;
class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        PriorityQueue<Long> pq = new PriorityQueue<>();
        for(int i=0; i<scoville.length; i++) pq.add((long)scoville[i]);
        while(!pq.isEmpty() && pq.size()>1){
            if(pq.peek()>=K) break;
            answer++;
            long a=pq.poll();
            long b=pq.poll()*2;
            pq.add(a+b);
        }
        if(pq.isEmpty() || pq.size()<1 || pq.peek()<K) answer=-1;
        
        return answer;
    }
}
