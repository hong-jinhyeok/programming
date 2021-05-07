/*
프로그래머스 로또의 최고 순위와 최저 순위
맞친 숫자를 인덱스로 하여 순위의 값을 가진 배열 rate
당첨 번호를 알 수 있는 boolean배열 선언
당첨번호를 index로 true 값을 입력
로또 번호를 index로 하여 true인지 false인지로 맞춘 숫자의 수를 판별
0의 개수를 세어서 최저와 죄고 등수를 판별
*/
class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = {0,0};
        int low=0;
        int zero=0;
        int[] rate = {6,6,5,4,3,2,1};
        boolean[] number= new boolean[46];
        
        for(int i=0; i<6; i++){
            number[win_nums[i]]=true;
        }
        for(int i=0; i<6; i++){
            if(lottos[i]==0) zero++;
            else if(number[lottos[i]]==true) low++;
        }
        answer[0]=rate[low+zero];
        answer[1]=rate[low];
        return answer;
    }
}
