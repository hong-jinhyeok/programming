/*
백준 16395 파스칼의 삼각형
dp 사용
이전 행의 숫자를 더하여 배열을 채움.
파스칼의 삼각형 규칙
*/
import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
		int k=scanner.nextInt();
        int[][] dp = new int [30][30];
        dp[0][0] = 1;
	    dp[1][0] = 1;
	    dp[1][1] = 1;
    	for (int i = 2; i < 30; i++) {
    		dp[i][0] = 1;
    		for (int j = 1; j < i; j++) {
    			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
	    	}
		    dp[i][i] = 1;
    	}
        System.out.println(dp[n-1][k-1]);
	}

}
