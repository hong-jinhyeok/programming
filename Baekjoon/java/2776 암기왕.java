/*
백준 2776 암기왕
arraylist에 담고 그 안에 원소 값이 있는지 확인
2번째 방법으로 바이너리 서치를 사용 - > 시간초과 실패..
- 시간초과 이유분석해야함.
*/
import java.util.*;
import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int testCase = Integer.parseInt(br.readLine());

		for (int i = 0; i < testCase; i++) {
		    int N = Integer.parseInt(br.readLine());
		    StringTokenizer st = new StringTokenizer(br.readLine());

		    ArrayList<Integer> v = new ArrayList<>();
		    for (int j = 0; j < N; j++) {
			v.add(Integer.parseInt(st.nextToken()));
		    }
		    //Collections.sort(v);
		    int M = Integer.parseInt(br.readLine());

		    st = new StringTokenizer(br.readLine());

		    for (int j = 0; j < M; j++) {
			int a = Integer.parseInt(st.nextToken());
			if(Collections.binarySearch(v,a)>0){
			    bw.write("1\n");
			}
			else {
			    bw.write("0\n");
			}
		    }
		}
	}
}
