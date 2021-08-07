/*
프로그래머스 하샤드 수
각자리수를 더한 수를 구함
원래 수를 구한 수로 나눔
나머지가 0인지에 따라 반환값 설정
*/
function solution(x) {
    var answer = true;
    let y=x;
    let sum=0;
    while(y>0){
        sum+=(y%10);
        y=parseInt(y/10);
    }
    if(x%sum==0) return answer;
    return false;
}