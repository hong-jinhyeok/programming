package baekjoon;
/*
���� 2941 ũ�ξ�Ƽ�� ���ĺ�
String�� ����Ͽ� �ذ�.
replace�Լ��� �̿��Ͽ� ��ü�� ���ڵ��� string �迭�� ������ ����
�ݺ����� ���� �� ���ڿ��� ��ü�ϰ� �������� ���ڿ��� ���̸� ��ȯ.
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