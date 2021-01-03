package baekjoon;
/*
 백준 17206 준석이의 수학 숙제
정수를 입력받고 3과 7의 배수를 모두 더하는 문제.
DP방법을 사용.
모든 계산을 1차원 배열에 저장해 놓고 입력값에 해당하는 값을 출력만 하는 형식.
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
