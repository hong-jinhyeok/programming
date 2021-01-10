package baekjoon;
/*
���� 2606 ���̷���
BFS�� �̿��Ͽ� ���̷����� ������ ���θ� Ȯ��.
BFS - queue�� �̿��Ͽ� ����
DFS�� ������� ���� ������ DFS�� ��� ��츦 �Ǻ��ϱ� ������
������ �������� �ÿ� ���� �� �ִ� BFS�� ���.
input���� ���� �Լ��� ���� ����.
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