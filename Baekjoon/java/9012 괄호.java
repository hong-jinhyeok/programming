/*
백준 9012 괄호
stack을 사용
조건을 만족시키지 않는 경우를 찾아서 NO 출력
*/
import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
		String str_sub = scanner.nextLine();
		for(int i=0; i<n; i++){
			Stack<Character> st = new Stack<>();
			String str = scanner.nextLine();
			for(int j=0; j<str.length(); j++){
				if(st.isEmpty() == true && str.charAt(j) == ')') {
					System.out.println("NO");
					break;
				}
				else if(str.charAt(j) == '(') st.push(str.charAt(j));
				else if(str.charAt(j) == ')') st.pop();
				if(j==str.length()-1 && st.isEmpty() == false) System.out.println("NO");
				else if(j == str.length()-1 && st.isEmpty() == true) System.out.println("YES");
			}
		}
	}

}