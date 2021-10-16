/*
프로그래머스 JadenCase 문자열 만들기
check 값에 따라 값 변경
check==1
-> 대문자면 소문자로 변경
-> 나머진 그대로
-> ' '이면 check 0으로 초기화
check==0
-> 소문자면 대문자로 값 변경
-> 나머진 그대로
-> check 1로 초기화
*/
class Solution {
    public String solution(String s) {
        String answer = "";
        int check = 0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)==' '){
                check=0;
                answer+=' ';
            }else if(check==0){
                if('a'<=s.charAt(i) && s.charAt(i)<='z') answer+=(char)(s.charAt(i)-32);
                else answer+=s.charAt(i);
                check=1;
            } else{
                if('A'<=s.charAt(i) && s.charAt(i)<='Z') answer+=(char)(s.charAt(i)+32);
                else answer+=s.charAt(i);
            }
        }
        return answer;
    }
}
