package baekjoon;
/*
백준 2164 카드2
Queue를 이용하여 해결.
규칙이 Queue의 특성을 이용하면 해결됨.
버리고 다시 넣고를 반복하는 작업.
queue의 size가 1이 되기까지 반복.
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