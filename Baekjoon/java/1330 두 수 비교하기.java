package baekjoon;
/*
 ���� 1330 �� �� ���ϱ�
 �ΰ��� ���� �Է¹ް�  ũ���.
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
