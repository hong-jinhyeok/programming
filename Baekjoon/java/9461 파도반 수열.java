/*
백준 9461 파도반 수열
DP 활용
6번 째 부터는 이전 수 + 첫번 째 수 의 형태로
더하는 두 수의 index를 하나씩 증가하며 덧셈
dp배열은 long long의 타입으로 해야 overflow를 막을 수 있음
*/
import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
        long[] dp = new long[101];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        dp[3]=1;
        dp[4]=2;
        dp[5]=2;
		dp[6]=3;
        dp[7]=4;
        dp[8]=5;
        dp[9]=7;
        dp[10]=9;
        int j=6;
        for(int i=11; i<101; i++){
            dp[i]=dp[i-1]+dp[j];
            j++;
        }
        int t=scanner.nextInt();
        for(int i=0; i<t; i++){
            int a=scanner.nextInt();
            System.out.println(dp[a]);
        }
	}

}
