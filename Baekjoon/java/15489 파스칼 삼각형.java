/*
백준 15489 파스칼 삼각형
dp 사용
이전 행의 숫자를 더하여 배열을 채움.
파스칼의 삼각형 규칙 사용 후
해당 범위의 값들의 합을 구함
*/
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int r=scanner.nextInt();
        int c=scanner.nextInt();
        int w=scanner.nextInt();
        int[][] arr = new int[30][30];
        for(int i=1; i<=29; i++){
            for(int j=1; j<=i; j++){
                if (j == 1 || j==i) arr[i][j] = 1;
			    else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        int sum = 0;
        for (int i = r; i < w + r; i++) {
		    for (int j = c; j <= i - r + c; j++) {
		    	sum += arr[i][j];
		    }
	    }
        System.out.println(sum);
	}

}
