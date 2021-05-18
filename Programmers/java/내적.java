/*
내적
반복문을 통해 내적공식을 적용
*/
class Solution {
    public int solution(int[] a, int[] b) {
        int answer = 0;
        for(int i=0; i<a.length; i++){
            answer+=(a[i]*b[i]);
        }
        return answer;
    }
}
