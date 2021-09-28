/*
 백준 1075 나누기
 자료형을 확인하는 문제 
 최대 20억 -> int형의 범위에 충족
 int형을 사용하여 해결
 처음부터 큰수의 뒤에 두자리를 00으로 만들고 1씩 늘리며 
 조건에 충족하는 숫자인지 확인
 */
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int a=scanner.nextInt();
		int b=scanner.nextInt();
		int newA = a/100;
        newA*=100;
        int remain = newA%100;
        while(newA%b!=0){
            newA++;
            remain = newA%100;
        }
        if(remain<10) System.out.println("0"+remain);
        else System.out.println(remain);
	}

}
