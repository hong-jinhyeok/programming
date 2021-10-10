/*
프로그래머스 문자열을 정수로 바꾸기
-일 경우, +일 경우, 부호가 없을 경우 3가지로 나누어서 stoi를 사용
*/
class Solution {
    public int solution(String s) {
        int answer = 0;
        if(s.charAt(0)=='-') {
            answer = -1 * Integer.parseInt(s.substring(1,s.length()));
        } else if(s.charAt(0)=='+') {
            answer = Integer.parseInt(s.substring(1,s.length()));
        } else {
            answer = Integer.parseInt(s.substring(0,s.length()));
        }
        return answer;
    }
}
