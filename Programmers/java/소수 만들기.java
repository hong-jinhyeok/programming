/*
프로그래머스 소수 만들기
에라스토테네스의 체를 사용하여 3000까지의 수 중 소수를 모두 판별.
완전탐색을 사용하여 50개 중 3개를 선택-> 더한 값으로 소수판별 후 count
*/
import java.util.*;
class Solution {
    int count=0;
    boolean[] number = new boolean[3001];
    
    public void dfs(int idx, ArrayList<Integer> v, int[] nums) {
        if(v.size() == 3){
            int sum= v.get(0) + v.get(1) + v.get(2);
            // System.out.println(v.get(0)+","+v.get(1)+","+v.get(2));
            if(number[sum]==true) {
                count++;
            }
            return;
        }
        for(int i=idx; i<nums.length; i++){
            v.add(nums[i]);
            dfs(i+1,v,nums);
            v.remove(v.size()-1);
        }
        return;
    }
    public int solution(int[] nums) {
        int answer = -1;
		for(int i=0; i<=3000; i++) number[i] = true;
        for(int i=2; i<= Math.sqrt(3000); i++) {
            if(number[i]==false) continue;
            for(int j=i*i; j<=3000; j+=i) number[j] = false;
        }
        ArrayList<Integer> v = new ArrayList<>();
		dfs(0,v,nums);
        answer=count;
        return answer;
    }
}
