/*
프로그래머스 문자열 내 p와 y의 개수
반복문을 통해 p와 y의 개수를 따로 count
비교후 true false 반환
*/
class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int p=0,y=0;
        for(int i=0; i<s.length();i++){
            if(s.charAt(i)=='p'|| s.charAt(i)=='P') p++;
            else if(s.charAt(i)=='y'|| s.charAt(i)=='Y') y++;
        }
        if(y==p) return true;
        return false;
    }
}
