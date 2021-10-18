/*
프로그래머스 문자열 다루기 기본
조건 1 - 길이는 4 혹은 6
조건 2 - 0~9의 문자만 존재
해당 안되면 무조건 false
*/
class Solution {
    public boolean solution(String s) {
        boolean answer = true;
        if(s.length()!=4){
            if(s.length()!=6) return false;
        }
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) <= '9'&& s.charAt(i) >='0') continue;
            else return false;
        }
        return answer;
    }
}
