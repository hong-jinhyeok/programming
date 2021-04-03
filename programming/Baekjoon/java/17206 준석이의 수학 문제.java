package baekjoon;
/*
 ���� 1065 �Ѽ�
 1000������ ���� �� �Ѽ��� ��� ã�� ���� �Է� ���� �� ������ �Ѽ��� ���
 DPȰ��
 �迭�� �� index ������ �Ѽ��� ����.
 1�� �ڸ� 10�ڸ� ������ ��� �Ѽ��� �� �� ����.
 3�ڸ� ���ʹ� �� �ڸ����� ���� ���� �Ѽ��� �Ǻ��Ͽ� �´ٸ� ���� ���� +1�ϴ� ����.
 */
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int[] arr = new int[1001];
		int i;
		for(i=0;i<100;i++) arr[i]=i;
		for( ; i<1000; i++) {
			int a=i/100;
			int b=(i-a*100)/10;
			int c=i%10;
			if(a-b == b-c) arr[i]=arr[i-1]+1;
			else arr[i]=arr[i-1];
		}
		arr[1000]=arr[999];
		int n=scanner.nextInt();
		System.out.println(arr[n]);
	}
}
