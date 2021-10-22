/*
백준 11727 2xn 타일링2
방법은 2xn 타일링과 동일.
DP를 사용.
1차원 배열을 선언한 후 경우에 수의 따른 값을 저장.
다른 점은 길이가 2인 부분을 채우는 방법이 
2x1짜리 2개를 놓는 방법
2x2짜리 1개를 놓는 방법 2가지므로 x2를 해야함.
*/
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		int input=scanner.nextInt();
		
		int[] arr=new int[1001];
		arr[0]=1;arr[1]=1;
		for(int i=2;  i<=input; i++) {
			arr[i]=(arr[i-1]%10007+arr[i-2]*2%10007)%10007;
		}
		System.out.println(arr[input]);
	}
}
