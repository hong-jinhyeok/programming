/*
프로그래머스 K번째수
새로운 벡터에 array에서 골라야하는 숫자들을 삽입.
sort 후 k번 째 수만 answer에 삽입.
*/
import java.util.*;
class Solution {
    public ArrayList<Integer> solution(int[] array, int[][] commands) {
        ArrayList<Integer> answer = new ArrayList<>();
        int n = commands.length;
        for(int a=0; a<n; a++){
            ArrayList<Integer> arr = new ArrayList<>();
            for(int i=commands[a][0]-1; i<commands[a][1]; i++){
                arr.add(array[i]);
            }
            Collections.sort(arr);
            answer.add(arr.get(commands[a][2]-1));
        }
        return answer;
    }
}
