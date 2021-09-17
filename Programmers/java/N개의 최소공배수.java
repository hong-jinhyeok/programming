/*
프로그래머스 N개의 최소공배수
반복문을 돌며 1부터 확인
배열 있는 모든 수로 나눠보며 판별
*/
class Solution {
    public boolean check(int[] arr, int num){
        for(int i=0; i<arr.length; i++){
            if(num%arr[i]==0) continue;
            return false;
        }
        return true;
    }
        public int solution(int[] arr) {
        int answer = 0;
        for(int i=1; ; i++){
            if(check(arr,i)){
                answer=i;
                break;
            }
        }
        return answer;
    }
}