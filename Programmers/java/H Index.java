/*
프로그래머스 H Index
오름차순 정렬 후 비교
i번째 값이 citations의 size-i보다 이상인지 비교
이상이라면 그
*/
import java.util.*;
class Solution {
    public int solution(int[] citations) {
        int answer = 0;
        Arrays.sort(citations);
        for(int i=0; i<citations.length; i++){
            int n=citations[i];
            int s=citations.length-i;
            if(s<=n) {
                answer=s;
                break;
            }
        }
        return answer;
    }
}
