package baekjoon;
/*
���� 2164 ī��2
Queue�� �̿��Ͽ� �ذ�.
��Ģ�� Queue�� Ư���� �̿��ϸ� �ذ��.
������ �ٽ� �ְ� �ݺ��ϴ� �۾�.
queue�� size�� 1�� �Ǳ���� �ݺ�.
*/
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<Integer>();
		
		int input=scanner.nextInt();
		
		for(int i=0; i<input; i++) {
			q.add(i+1);
		}
		while(q.size()>1) {
			q.poll();
			int a=q.poll();
			q.add(a);
		}
		System.out.println(q.poll());
	}
}