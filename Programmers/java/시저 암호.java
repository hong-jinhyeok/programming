/*
프로그래머스 시저 암호
해당 string의 글자마다 n의 정수만큼 더 해준 문자를 answer에 삽입
n을 더한 문자가 대문자가 Z를 넘어가거나 소문자가 z를 넘어가면 26만큼의 문자값을 빼줌
자바의 경우 형변환이 필수
*/
class Solution {
    public String solution(String s, int n) {
        String answer = "";
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)==' '){
                answer+=(s.charAt(i));
                continue;
            }
            char ch = s.charAt(i);
            if('z' < s.charAt(i)+n) ch=(char)(s.charAt(i)-26);
            else if('Z' < s.charAt(i)+n && s.charAt(i) <= 'Z') ch=(char)(s.charAt(i)-26);
            answer+=(char)(ch+n);
        }
        return answer;
    }
}
