/*
프로그래머스 숫자의 표현
투포인터를 사용.
start와 end를 이용하여 범위 내의 숫자의 합을 매 반복문마다 최신화.
합이 n보다 크다면 start를 증가
합이 n보다 작다면 end 증가
*/
class Solution {
    public int solution(int n) {
        int answer = 0;
        int start=1,end=1;
        int sum=0;
        while(start<=n){
            if(sum==n){
                answer++;
                sum-=start;
                start++;
            }else if(sum>n){
                sum-=start;
                start++;
            }else if(sum<n){
                if(end<=n) {
                    sum+=end;
                    end++;
                }
            }
        }
        return answer;
    }
}
