/*
백준 2501 약수 구하기
ArrayList를 사용하여 해결
ArrayList에 해당 수의 모든 약수를 삽입
ArrayList의 size가 k보다 작다면 0출력
아니라면 k번째 약수 출력
*/
import java.util.Scanner;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		ArrayList<Integer> arr = new ArrayList<Integer>();
        int n=scanner.nextInt();
        int k=scanner.nextInt();
        for (int i = 1; i <= n; i++) {
		    if (n%i == 0) arr.add(i);
	    }
        if (arr.size() < k) System.out.println("0");
	    else System.out.println(arr.get(k-1));
	}
}
