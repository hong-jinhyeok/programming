/*
프로그래머스 행렬의 덧셈
이중 어레이리스트 사용
이중반복문을 통해 같은 위치의 행렬값을 더함
*/
import java.util.*;
class Solution {
    public ArrayList<ArrayList<Integer>> solution(int[][] arr1, int[][] arr2) {
        ArrayList<ArrayList<Integer>> answer = new ArrayList<ArrayList<Integer>>();
        for(int i=0; i<arr1.length; i++){
            ArrayList<Integer> v=new ArrayList<>();
            for(int j=0; j<arr1[0].length; j++){
                v.add(arr1[i][j]+arr2[i][j]);
            }
            answer.add(v);
        }
        return answer;
    }
}
