/*
프로그래머스 멀쩡한 사각형
직사각형에서 대각선으로 그을시 멀쩡한 사각형의 개수
-> w*h - (w/최대공약수 + h/최대공약수 -1) * 최대공약수
*/
class Solution {
    public int gcd(int a, int b){
        int c;
        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    
    public long solution(int w, int h) {
        long answer = 1;
        int nw=w/gcd(w,h);
        int nh=h/gcd(w,h);
        long m = (long)(nw+nh-1) * (long)gcd(w,h);
        answer=(long)w*(long)h - m;
        return answer;
    }
}
