package baekjoon;
/*
���� 1929 �Ҽ� ���ϱ�
ArrayList�� ����Ͽ� �ذ�
�Ҽ��� ����
1. ¦���� 2�� �����ϰ� ��� ����
2. Ȧ���� ��� ���ϴ� �Ҽ��� ������ �������� �ʰ� �� �Ҽ��� ������ �� ���� �Ҽ��� ���� ������ ���� �Ҽ�.
2���� ������ �����ϴ� ���� arraylist�� �߰�.
n,m�� �Է¹ް� �� ������ �Ҽ��� ���
*/
import java.util.Scanner;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		ArrayList<Integer> arr = new ArrayList<Integer>();

		arr.add(2);
		arr.add(3);
		arr.add(5);
		arr.add(7);
		
		for(int i = 11; i <= 1000000; i+=2) {
			for(int j = 1; i >= arr.get(j) * arr.get(j); j++) {
				if(i % arr.get(j) == 0) {
					break;
				}else if(i >= Math.pow(arr.get(j), 2) && i < Math.pow(arr.get(j+1), 2)){
					arr.add(i);
				}
			}
		}
		int n,m;
		m=scanner.nextInt();
		n=scanner.nextInt();
		for(int i=0; i<arr.size(); i++) {
			if(arr.get(i)<m) continue;
			else if(arr.get(i) > n) break;
			else System.out.println(arr.get(i));
		}
	}
}