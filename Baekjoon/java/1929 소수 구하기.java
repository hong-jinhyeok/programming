package baekjoon;
/*
백준 1929 소수 구하기
ArrayList를 사용하여 해결
소수의 조건
1. 짝수는 2를 제외하고 모두 제외
2. 홀수의 경우 비교하는 소수로 나누어 떨어지지 않고 그 소수의 제곱과 그 다음 소수의 제곱 사이의 수면 소수.
2가지 조건을 충족하는 수를 arraylist에 추가.
n,m을 입력받고 그 사이의 소수를 출력
*/
import java.util.Scanner;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		ArrayList<Integer> arr = new ArrayList<Integer>();

		arr.add(2);
		arr.add(3);
		arr.add(5);
		arr.add(7);
		
		for(int i = 11; i <= 1000000; i+=2) {
			for(int j = 1; i >= arr.get(j) * arr.get(j); j++) {
				if(i % arr.get(j) == 0) {
					break;
				}else if(i >= Math.pow(arr.get(j), 2) && i < Math.pow(arr.get(j+1), 2)){
					arr.add(i);
				}
			}
		}
		int n,m;
		m=scanner.nextInt();
		n=scanner.nextInt();
		for(int i=0; i<arr.size(); i++) {
			if(arr.get(i)<m) continue;
			else if(arr.get(i) > n) break;
			else System.out.println(arr.get(i));
		}
	}
}