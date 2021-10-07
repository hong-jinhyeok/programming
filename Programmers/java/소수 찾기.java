/*
프로그래머스 소수 찾기
에라스토테네스의 체를 사용.
에라스토테네스의 체 -> 소수를 찾고 소수의 배수의 수를 모두 제거하는 방식.
*/
class Solution {
    public int solution(int n) {
        int answer = 0;
        boolean[] number = new boolean[1000001];
        for(int i=0; i<=n; i++) number[i]=true;
        
        for(int i=2; i<=Math.sqrt(n); i++){
            if (number[i] == false) continue;
	    	for (int j = i * i; j <= n; j += i) {
		    	number[j] = false;
		    }
        }
        for (int i = 2; i <= n; i++) {
	    	if (number[i] != false) answer++;
    	}
        return answer;
    }
}
