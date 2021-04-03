package baekjoon;
/*
백준 1764 듣보잡
HashMap과 ArrayLsit를 사용하여 해결.
HashMap을 사용하는 이유는 중복의 단어를 찾는데 있어서 ArrayList보다 빠르기 때문.
중복 단어들은 ArrayList에 저장 후 sort하여 출력.
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