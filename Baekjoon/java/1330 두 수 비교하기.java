package baekjoon;
/*
 백준 1330 두 수 비교하기
 두개의 값을 입력받고  크기비교.
 */
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int a=scanner.nextInt();
		int b=scanner.nextInt();
		if(a==b) System.out.println("==");
		else if(a<b) System.out.println("<");
		else System.out.println(">");
	}

}
