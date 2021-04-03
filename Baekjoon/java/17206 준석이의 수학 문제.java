package baekjoon;
/*
 백준 1065 한수
 1000이하의 숫자 중 한수를 모두 찾아 놓고 입력 받은 수 이하의 한수를 출력
 DP활용
 배열에 각 index 이하의 한수를 저장.
 1의 자리 10자리 수들은 모두 한수로 볼 수 있음.
 3자리 부터는 각 자리수의 차를 보고 한수를 판별하여 맞다면 이전 값에 +1하는 형식.
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
