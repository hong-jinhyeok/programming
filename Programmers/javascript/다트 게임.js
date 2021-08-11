/*
프로그래머스 다트 게임
문자마다 조건을 다르게 주어서 반복문으로 문자열이 끝날 때까지 연산식을 만듦.
각 알파벳 뒤에 중간 연산 정리하도록 설계
*과 #의 조건을 다르게 주어 연산
*/
function solution(dartResult) {
    var answer = 0;
    let len=dartResult.length;
    for(let i=0; i< len; ){
        let sum=0;
        let mul=1;
        let num;
        if(dartResult[i]=='1' && dartResult[i+1]=='0'){
            num=10;
            i++;
        } else if(dartResult[i]=='9') num=9;
        else if(dartResult[i]=='8') num=8;
        else if(dartResult[i]=='7') num=7;
        else if(dartResult[i]=='6') num=6;
        else if(dartResult[i]=='5') num=5;
        else if(dartResult[i]=='4') num=4;
        else if(dartResult[i]=='3') num=3;
        else if(dartResult[i]=='2') num=2;
        else if(dartResult[i]=='1') num=1;
        else if(dartResult[i]=='0') num=0;
        let x=dartResult[i+1]=='S'?1:(dartResult[i+1]=='D'?2:3);
        for(let j=0; j<x; j++) mul *= num;
        sum+=mul;
        if(i+2<len && dartResult[i+2]=='*') {
            sum*=2;
            i+=3;
            
        } else if(dartResult[i+2]=='#') {
            sum *= -1;
            i+=3;
        }else i+=2;
        if(i+2<len && dartResult[i+2]=='*') sum *= 2;
        answer+=sum;
    }
    return answer;
}
