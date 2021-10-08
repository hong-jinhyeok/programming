/*
프로그래머스 직사각형 별찍기
간단한 이중포문 문제
System.out.print를 사용하지 않고 하나의 string을 만들어 사용
*/
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        for(int i=0; i<b; i++){
            String s = new String("");
            for(int j=0; j<a; j++){
                s+="*";
            }
            System.out.println(s);
        }
    }
}
