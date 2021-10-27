/*
프로그래머스 이진 변환 반복하기
매 반복문마다 0을 제외한 새로운 문자열을 생성.
생성된 문자열을 2진수로 변환->2로 나누며 나머지를 string에 append
                        ->최종 string을 reverse
1이 될 때까지 변환
*/
import java.util.*;

class Solution {
    public String num2(int n) {
        String s = new String("");
        while(n>0){
            s += n%2;
            n/=2;
        }
        StringBuffer rv = new StringBuffer(s);
        s = rv.reverse().toString();
        return s;
    }
    public int[] solution(String s) {
        int[] answer = new int[2];
        String ss=s;
        int trans=0;
        int zero=0;
        while(ss.length()>1){
            trans++;
            StringBuffer rv = new StringBuffer();
            for(int i=0; i<ss.length(); i++){
                if(ss.charAt(i)=='1') rv.append('1');
                else zero++;
            }
            int l=rv.toString().length();
            ss=num2(l);
        }
        answer[0]=trans;
        answer[1]=zero;
        return answer;
    }
}
