/*
프로그래머스 체육복
기본적으로 모든 학생이 체육복을 하나씩 가졌다고 판단
->index를 1~n까지 사용하기 위해 vector의 크기를 n+1로 하고 1로 모두 초기화
lost한 학생은 -1을 reserve한 학생은 +1을 하여 체육복 다시 초기화
반복문을 통해 순회하면서 빌리는 순서를 앞사람을 먼저 체크하고 뒷사람을 나중에 체크하여 빌리도록함
*/
import java.util.*;
class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        Arrays.sort(lost);
        Arrays.sort(reserve);
        ArrayList<Integer> Lost = new ArrayList<>(lost.length);
        for (int i =0; i< lost.length; i++) {
            Lost.add(lost[lost.length-1-i]);
        }
        ArrayList<Integer> Reserve = new ArrayList<>(reserve.length);
        for (int i =0; i< reserve.length; i++) {
            Reserve.add(reserve[reserve.length-1-i]);
        }
        int[] v = new int[n+1];
        for(int i=0; i<=n; i++) v[i]=1;
        v[0]=0;
        for(int i=1; i<=n;){
            if(Lost.size()>0 && Lost.get(Lost.size()-1)==i){
                v[i]--;
                Lost.remove(Lost.size()-1);
            }
            else if(Reserve.size()>0 && Reserve.get(Reserve.size()-1)==i) {
                v[i]++;
                Reserve.remove(Reserve.size()-1);
            }
            else i++;
        }
        for(int i=1; i<=n; i++){
            if(v[i]==0){
                if(v[i-1]==2){
                    v[i-1]=1;
                    v[i]=1;
                }else if(i!=n  && v[i+1]==2){
                    v[i+1]=1;
                    v[i]=1;
                }
            }
        }

        for(int i=1; i<=n; i++){
            if(v[i]>0) answer++;
        }
        return answer;
    }
}
