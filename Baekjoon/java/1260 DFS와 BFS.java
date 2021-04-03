package baekjoon;
/*
���� 1260 DFS�� BFS
�⺻ �˰��� DFS�� BFS�� ����.
DFS�� ����Լ��� �̿��Ͽ� �ذ�.
�湮�� ���� ��� false�� �ٲ��ְ� �湮���� ���� �ٸ� ���� Ž��.
BFS�� queue�� �̿��Ͽ� �ذ�.
�湮�� �� �ִ� ���� queue�� ���� �� ���ʷ� �湮.
*/
import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	public static void DFS(boolean[][] arr,int v, int N) {
		System.out.print(v+1 + " ");
		for(int i=0; i<N; i++) {
			if(arr[i][v] == true) arr[i][v]=false;
		}
		for(int i=0; i<N; i++) {
			if(arr[v][i]==true) {
				DFS(arr,i,N);
			}
		}
	}
	public static void BFS(boolean[][] arr,int v, int N) {
		Queue<Integer> q = new LinkedList<Integer>();
		int num=v;
		for(int i=0; i<N; i++) {
			if(arr[i][num]==true) {
				arr[i][num]=false;
			}
		}
		q.offer(v);
		while(!q.isEmpty()) {
			num = q.poll();
			System.out.print((num + 1)+" ");
			for(int i=0; i<N; i++) {
				if(arr[num][i]==true) {
					for(int j=0; j<N; j++) {
						arr[j][i]=false;
					}
					q.offer(i);
				}
			}
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int N,M,V;
		N=scanner.nextInt();
		M=scanner.nextInt();
		V=scanner.nextInt();
		boolean[][] arr = new boolean[N][N];
		boolean[][] arr2 = new boolean[N][N];
		for(int i=0; i<M; i++) {
			int num1,num2;
			num1=scanner.nextInt();
			num2=scanner.nextInt();
			arr[num1-1][num2-1]=true; arr[num2-1][num1-1]=true;
			arr2[num1-1][num2-1]=true; arr2[num2-1][num1-1]=true;
		}
		DFS(arr,V-1,N);
		System.out.println();
		BFS(arr2,V-1,N);
	}
}