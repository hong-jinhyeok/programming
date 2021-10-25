/*
백준 1212 8진수 2진수
입력값의 범위가 엄청 크기 때문에 string으로 받아야함
8진수에서 2진수가 될 때
-> 8진수 1자리수당 2진수 3자리가 됨
2진수 string을 만든 뒤 조건에 맞게 앞의 0을 삭제 후 출력
stringbuffer를 사용
-> string에 이어 붙이면 시간 초과 발생
-> stringbuffer를 사용하여 시간을 단축
*/
import java.util.*;
public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		String s = scanner.nextLine();
        String[] change = {"000","001","010","011","100","101","110","111"};
        StringBuffer answer = new StringBuffer();
        for(int i=0; i<s.length(); i++) {
            answer.append(change[s.charAt(i)-'0']);
        }
        int idx=0;
        String answers = answer.toString();
        for(int i=0; i<answers.length()-1; i++){
            if(answers.charAt(i) == '0') idx++;
            else break;
        }
        answers = answers.substring(idx);
        System.out.println(answers);
	}
}
