package baekjoon;
/*
백준 2606 바이러스
BFS를 이용하여 바이러스의 감염된 여부를 확인.
BFS - queue를 이용하여 구현
DFS를 사용하지 않은 이유는 DFS는 모든 경우를 판별하기 때문에
조건을 만족했을 시에 멈출 수 있는 BFS를 사용.
input값에 대한 함수를 따로 구현.
*/
import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	
	public static int BFS(boolean[][] arr, int N) {
		Queue<Integer> q = new LinkedList<Integer>();
		int c=0;
		
		q.offer(0);
		while(!q.isEmpty()) {
			int num = q.poll();
			for(int i=0; i<N; i++) {
				if(arr[num][i]==true) {
					for(int j=0; j<N; j++) {
						arr[j][i]=false;
					}
					q.offer(i);
					c++;
				}
			}
		}
		return c;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int N,M;
		N=scanner.nextInt();
		M=scanner.nextInt();
		boolean[][] arr = new boolean[N][N];
		for(int i=0; i<M; i++) {
			int num1,num2;
			num1=scanner.nextInt();
			num2=scanner.nextInt();
			arr[num1-1][num2-1]=true; arr[num2-1][num1-1]=true;
		}
		System.out.println(BFS(arr,N)-1);
	}
}