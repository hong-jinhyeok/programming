/*
 백준 2748 피보나치 수 2
 long형 배열을 선언
 피보나치 숫를 구하고 출력
 */
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
		long[] arr = new long[91];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        for(int i=3; i<91; i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        System.out.println(arr[n]);
	}

}
