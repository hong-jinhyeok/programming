/*
프로그래머스 핸드폰 번호 가리기
충분히 긴 *로된 문자열을 선언
주어진 번호길이-4 만큼 *문자열의 부분을 가져옴
나머지 뒤에를 번호로 채움
*/
class Solution {
    public String solution(String phone_number) {
        String answer = "";
        String star= new String("*************************");
        int i= phone_number.length()-4;
        answer+=star.substring(0,i);
        answer+=phone_number.charAt(i);
        answer+=phone_number.charAt(i+1);
        answer+=phone_number.charAt(i+2);
        answer+=phone_number.charAt(i+3);
        return answer;
    }
}