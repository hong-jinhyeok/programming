package baekjoon;
/*
 ���� 17206 �ؼ����� ���� ����
������ �Է¹ް� 3�� 7�� ����� ��� ���ϴ� ����.
DP����� ���.
��� ����� 1���� �迭�� ������ ���� �Է°��� �ش��ϴ� ���� ��¸� �ϴ� ����.
 */
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int[] arr = new int[80001];
		arr[0]=0;
		for(int i=1; i<=80000; i++) {
			if(i%21==0) arr[i]=arr[i-1]+i;
			else if(i%3==0) arr[i]=arr[i-1]+i;
			else if(i%7==0) arr[i]=arr[i-1]+i;
			else arr[i]=arr[i-1];
		}
		int num=scanner.nextInt();
		for(int i =0; i<num; i++) {
			int a=scanner.nextInt();
			System.out.println(arr[a]);
		}
		
	}

}
