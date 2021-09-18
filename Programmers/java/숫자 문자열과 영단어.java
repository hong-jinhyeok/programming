/*
프로그래머스 숫자 문자열과 영단어
1. 숫자면 바로 push
2. 문자면 sub 문자열에 삽입
3. 문자열이 완성된 단어면 숫자로 변화 후 push
3가지 규칙에 의거 코드 작성
막지막에 sub가 남아있다면 문자열 검사 후 push
*/
class Solution {
    public char changeNum(String s) {
        if(s.equals("zero")==true) return '0';
        else if(s.equals("one")==true) return '1';
        else if(s.equals("two")==true) return '2';
        else if(s.equals("three")==true) return '3';
        else if(s.equals("four")==true) return '4';
        else if(s.equals("five")==true) return '5';
        else if(s.equals("six")==true) return '6';
        else if(s.equals("seven")==true) return '7';
        else if(s.equals("eight")==true) return '8';
        return '9';
    }
    
    public boolean checkNum(String s){
        if(s.equals("zero")==true) return true;
        else if(s.equals("one")==true) return true;
        else if(s.equals("two")==true) return true;
        else if(s.equals("three")==true) return true;
        else if(s.equals("four")==true) return true;
        else if(s.equals("five")==true) return true;
        else if(s.equals("six")==true) return true;
        else if(s.equals("seven")==true) return true;
        else if(s.equals("eight")==true) return true;
        else if(s.equals("nine")==true) return true;
        return false;
    }
    
    public int solution(String s) {
        int answer = 0;
        String sub ="";
        String ans = "";
        for(int i=0; i< s.length(); i++){
            if(checkNum(sub)) {
                ans+=changeNum(sub);
                sub="";
            }
            if('0'<=s.charAt(i) && s.charAt(i)<='9'){
                ans+=s.charAt(i);
            }
            else{
                sub+=s.charAt(i);
            }
        }
        if(checkNum(sub)) ans+=changeNum(sub);
        answer=Integer.parseInt(ans);
        return answer;
    }
}
