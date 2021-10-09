/*
백준 1463 1로 만들기
주어진 3가지 규칙 중 가장 작은 횟수를 가지는 값을 구하는 문제
dp배열을 선언->각각의 index는 문제에서 주어진 수 n이됨
각 index에 대해 2로 나누어지면 2로 나눈 index의 dp값과
3으로 나누어지면 3으로 나눈 index의 dp값과
1을 뺀 index의 dp값을 비교하고 가장 작은 값을 선택해 +1해주며 dp배열을 채움
*/
import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
        int[] dp = new int[1000001];
        for(int i=0; i<1000001; i++) dp[i]=0;
        for (int i = 2; i <= 1000000; i++) {
		    int a = 2100000000, b = 2100000000, c = 2100000000;
		    if (i % 3 == 0) a = dp[i / 3] + 1;
		    if (i % 2 == 0) b = dp[i / 2] + 1;
		    c = dp[i - 1] + 1;
		    if (a>b) a = b;
		    if (a>c) a = c;
		    dp[i] = a;
	    }
        System.out.println(dp[n]);
	}
}
