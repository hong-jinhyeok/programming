package baekjoon;
/*
백준 11726 2xn 타일링
DP를 사용하여 해결.
1차원 배열을 이용하여 해결.
현재의 것은 길이가 1자리를 붙여서 완성되는 경우 + 2자리를 붙여서 완성되는 경우로 존재.
고로 a[i]=a[i-1]+a[i-2]로 생각할 수 있음.
*/
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<Integer>();
		
		int input=scanner.nextInt();
		
		int[] arr=new int[1001];
		arr[0]=1;arr[1]=1;
		for(int i=2;  i<=input; i++) {
			arr[i]=(arr[i-1]+arr[i-2])%10007;
		}
		System.out.println(arr[input]);
	}
}