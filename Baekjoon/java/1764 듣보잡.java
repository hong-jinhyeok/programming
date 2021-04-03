package baekjoon;
/*
���� 1764 �躸��
HashMap�� ArrayLsit�� ����Ͽ� �ذ�.
HashMap�� ����ϴ� ������ �ߺ��� �ܾ ã�µ� �־ ArrayList���� ������ ����.
�ߺ� �ܾ���� ArrayList�� ���� �� sort�Ͽ� ���.
*/
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		HashMap<String, Integer> m = new HashMap<String, Integer>();
		ArrayList<String> arr = new ArrayList<String>();
		int a= scanner.nextInt();
		int b= scanner.nextInt();
		
		for(int i=0; i<a+b; i++) {
			String s=scanner.nextLine();
			if(m.containsKey(s)==false) {
				m.put(s, 1);
			}else {
				arr.add(s);
			}
		}
		int c=arr.size();
		Collections.sort(arr);
		System.out.println(c);
		for(int i=0; i<c; i++) {
			System.out.println(arr.get(i));
		}
	}
}