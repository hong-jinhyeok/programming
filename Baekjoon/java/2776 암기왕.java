/*
백준 2776 암기왕
arraylist에 담고 그 안에 원소 값이 있는지 확인
- 시간초과 이유분석해야함.
*/
import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		
		int n=scanner.nextInt();
        while(n>0){
            int n1,n2;
            ArrayList<Integer> v = new ArrayList<>();
            n1=scanner.nextInt();
            for(int i =0; i<n1; i++){
                int a;
                a=scanner.nextInt();
                v.add(a);
            }
            n2=scanner.nextInt();
            for(int i =0; i<n2; i++){
                int a;
                a=scanner.nextInt();
                if(v.contains(a) == false) System.out.println("0");
                else System.out.println("1");
            }
            n--;
        }
	}
}
