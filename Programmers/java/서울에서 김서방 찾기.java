/*
프로그래머스 서울에서 김서방 찾기
반복문을 통해 seoul 배열을 탐색하며
equals를 통해 Kim을 찾음
String의 활용하여 쉽게 answer 작성
*/
import java.util.*;
class Solution {
    public String solution(String[] seoul) {
        String answer = "";
        for(int i=0; i<seoul.length; i++){
            if(seoul[i].equals("Kim")==true) {
                answer="김서방은 "+i+"에 있다";
                break;
            }
        }
        return answer;
    }
}
