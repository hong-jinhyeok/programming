package baekjoon;
/*
백준 2941 크로아티아 알파벳
String을 사용하여 해결.
replace함수를 이용하여 교체될 문자들을 string 배열에 저장해 놓고
반복문을 통해 한 문자열씩 교체하고 최종으로 문자열의 길이를 반환.
*/
import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		String[] str= new String[8];
		
		str[0]="c=";
		str[1]="c-";
		str[2]="dz=";
		str[3]="d-";
		str[4]="lj";
		str[5]="nj";
		str[6]="s=";
		str[7]="z=";
		
		String st=scanner.nextLine();
		
		for(int i=0; i<8; i++) {
			st=st.replace(str[i],"0");
		}
		System.out.println(st.length());
	}
}