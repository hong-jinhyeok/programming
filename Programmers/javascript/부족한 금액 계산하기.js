/*
프로그래머스 부족한 금액 계산하기
조건에 맞게 연산
*/
function solution(price, money, count) {
    var answer = 0;
    let s=0;
    for(let i=1; i<=count; i++){
        s+=(price*i);
    }
    if(s>money) answer=s-money;
    return answer;
}
