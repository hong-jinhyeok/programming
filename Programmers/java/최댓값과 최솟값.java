/*
프로그래머스 최댓값과 최솟값
문자열을 읽으며 하나의 정수의 형태가 되었다면 
정수로 형변환하여 vector에 삽입
정수를 담은 vector를 sort
answer에는 다시 문자열로 바꾸어 vector의 처음 값과 끝 값을 붙임
*/
import java.util.*;
class Solution {
    public String solution(String s) {
        String answer = "";
        String ss = "";
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)==' ') {
                al.add(Integer.parseInt(ss));
                ss="";
            } else {
                ss+=s.charAt(i);
            }
        }
        al.add(Integer.parseInt(ss));
        Collections.sort(al);
        answer=al.get(0)+" "+al.get(al.size()-1);
        return answer;
    }
}
