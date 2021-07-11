/*
프로그래머스 2016년
각 월에 해당하는 일 수를 배열에 저장.
a월 전까지의 일수를 다 더하고 b를 더함.
7로 나누었을 때 1==금 으로시작해 차례로 2==토, 3==일로 계산함.
금~목까지가 반복이기 때문.
parseInt를 사용하여 int형 변환이 필요
*/
function solution(a, b) {
    var answer = "";
    let month=[0,31,29,31,30,31,30,31,31,30,31,30,31];
    let num=0;
    for(let i=1; i<a; i++){
        num+=month[i];
    }
    num+=b;
    console.log(num);
    if(parseInt(num%7)==1) answer="FRI";
    else if(parseInt(num%7)==2) answer="SAT";
    else if(parseInt(num%7)==3) answer="SUN";
    else if(parseInt(num%7)==4) answer="MON";
    else if(parseInt(num%7)==5) answer="TUE";
    else if(parseInt(num%7)==6) answer="WED";
    else if(parseInt(num%7)==0) answer="THU";
    return answer;
}
