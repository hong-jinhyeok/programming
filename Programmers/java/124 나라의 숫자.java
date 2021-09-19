/*
프로그래머스 124 나라의 숫자
3진수를 변형한 문제.
나머지가 0이하 라면 다음 자리를 -1하고 4혹은 2로 표현
다음 자리에서 값을 빌려온다고 생각(0 -> 4, -1 -> 2)
*/
import java.util.*;
class Solution {
    public String solution(int n) {
        String answer = "";
        ArrayList<Integer> v = new ArrayList<>();
        while(n>0){
            v.add(n%3);
            n/=3;
        }
        for(int i=0; i<v.size()-1; i++){
            if(v.get(i)<1){
                int a= v.get(i+1);
                v.set(i+1,a-1);
                if(v.get(i)==0) answer+="4";
                else answer+="2";
            }else{
                answer+=(v.get(i));
            }
        }
        if(v.get(v.size()-1)!=0) answer+=v.get(v.size()-1);
        answer = new StringBuffer(answer).reverse().toString();
        return answer;
    }
}
