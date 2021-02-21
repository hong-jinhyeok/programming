package baekjoon;
/*
���� 11726 2xn Ÿ�ϸ�
DP�� ����Ͽ� �ذ�.
1���� �迭�� �̿��Ͽ� �ذ�.
������ ���� ���̰� 1�ڸ��� �ٿ��� �ϼ��Ǵ� ��� + 2�ڸ��� �ٿ��� �ϼ��Ǵ� ���� ����.
��� a[i]=a[i-1]+a[i-2]�� ������ �� ����.
*/
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<Integer>();
		
		int input=scanner.nextInt();
		
		int[] arr=new int[1001];
		arr[0]=1;arr[1]=1;
		for(int i=2;  i<=input; i++) {
			arr[i]=(arr[i-1]+arr[i-2])%10007;
		}
		System.out.println(arr[input]);
	}
}