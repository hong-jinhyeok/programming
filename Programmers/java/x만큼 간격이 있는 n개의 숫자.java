/*
프로그래머스 x만큼 간격이 있는 n개의 숫자
반복문을 통해 해당 숫자를 answer에 push
곱셈 과정에서 오버플로우 발생
-> int형을 long형으로 바꾸어 해결
*/
class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[n];
        for(int i=0; i<n; i++){
            long a= new Long(x);
            long b= new Long(i+1);
            answer[i]=a*b;
        }
        return answer;
    }
}
