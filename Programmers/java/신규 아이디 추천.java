/*
프로그래머스 신규 아이디 추천
각각의 step을 함수로 구현.
구현할 때 길이가 0일 때 조심해야할 step에 예외를 처리
step1-toLowerCase 사용
step2-문자열을 읽으며 확인
step3-반복문과 replace함수를 통해 계속해서 replace
step4-처음과 끝을 확인
step5-조건 확인 후 문자 삽입
step6-16이상일 경우 substr사용 후 마지막 문자 검사
step7-반복문 사용
*/
import java.util.*;
class Solution {
    public String step1(String old_id){
        String new_id=old_id.toLowerCase();
        return new_id;
    }
    
    public String step2(String old_id){
        String new_id="";
        for(int i=0; i<old_id.length(); i++){
            if('a'<=old_id.charAt(i) && old_id.charAt(i)<='z') new_id+=old_id.charAt(i);
            else if('0'<=old_id.charAt(i) && old_id.charAt(i)<='9') new_id+=old_id.charAt(i);
            else if(old_id.charAt(i)=='.' || old_id.charAt(i)=='-' || old_id.charAt(i)=='_') new_id+=old_id.charAt(i);
        }
        return new_id;
    }
    
    public String step3(String old_id){
        if(old_id.equals("")==true) return "";
        String new_id=old_id;
        while(true){
            if(new_id.equals(new_id.replace("..","."))==true) break;
            new_id=new_id.replace("..",".");
        }
        return new_id;
    }
    
    public String step4(String old_id){
        if(old_id.equals("")==true) return "";
        String new_id="";
        int olen=old_id.length();
        if(old_id.charAt(0)=='.') new_id=old_id.substring(1,olen);
        else new_id=old_id;
        if(new_id.length()>0 && new_id.charAt(new_id.length()-1)=='.') new_id=new_id.substring(0,new_id.length()-1);
        return new_id;
    }
    
    public String step5(String old_id){
        String new_id="";
        if(old_id.equals("")==true) new_id="a";
        else new_id=old_id;
        return new_id;
    }
    
    public String step6(String old_id){
        String new_id=old_id;
        if(new_id.length()>=16) new_id=new_id.substring(0,15);
        new_id=step4(new_id);
        return new_id;
    }
    
    public String step7(String old_id){
        String new_id=old_id;
        while(new_id.length()<3) new_id+=new_id.charAt(new_id.length()-1);
        return new_id;
    }
    
    public String solution(String new_id) {
        String answer = "";
        answer=step1(new_id);
        answer=step2(answer);
        answer=step3(answer);
        answer=step4(answer);
        answer=step5(answer);
        answer=step6(answer);
        answer=step7(answer);
        return answer;
    }
}
