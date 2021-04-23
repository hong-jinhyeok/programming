/*
프로그래머스 주식가격
Pair의 형태를 class로 만들어서 활용
stack을 사용하여 해결
가격이 올랐다면 push
떨어졌다면 반복문을 통해 stack에서 빼내며 비교
answer의 크기를 미리 잡아두고 []을 통해 접근
stack에는 가격과 index를 pair형태로 저장.
*/
import java.util.*;

class Pair{
	Integer y;
	Integer x;
	public Pair(Integer y, Integer x) {
		this.y = y;
		this.x = x;
	}
	public Integer first() {
		return y;
	}
	public Integer second() {
		return x;
	}
}

class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        Stack<Pair> s= new Stack<>();
        int i=0;
        while(i<answer.length){
            if(s.empty()==true) {
                s.push(new Pair(prices[i],i));
                i++;
            }else {
                if(!s.empty() && s.peek().first()<=prices[i]){
                    s.push(new Pair(prices[i],i));
                    i++;
                }else{
                    while(!s.empty() && s.peek().first()>prices[i]){
                        answer[s.peek().second()]=i-s.peek().second();
                        s.pop();
                    }
                }
            }
        }
        while(!s.empty()){
            answer[s.peek().second()]=answer.length-s.peek().second()-1;
            s.pop();
        }
        return answer;
    }
}
