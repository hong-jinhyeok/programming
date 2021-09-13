/*
프로그래머스 제거하기
stack을 사용.
stack이 비었거나 stack의 top이 현재 문자와 다르다면 stack에 push.
stack의 top과 현재 문자가 같다면 pop진행.
마지막에 stack이 비었다면 1 아니며 0.
자바에서는 top대신 peek을 사용
*/
import java.util.*;
class Solution
{
    public int solution(String s)
    {
        int answer=0;
        Stack<Character> st = new Stack<>(); 
        for(int i=0; i<s.length(); i++){
            if(st.empty()) st.push(s.charAt(i));
            else{
                if(st.peek()==s.charAt(i)) st.pop();
                else st.push(s.charAt(i));
            }
        }
        if(st.empty()) answer=1;
        return answer;
    }
}
