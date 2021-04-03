/*
프로그래머스 3진법 뒤집기
vector에 3으로 나눈 나머지를 저장하면서 n을 3으로 나눈 몫으로 초기화
vector의 끝부터 수를 가져오면 3진법 수를 거꾸로 한자리씩 가져오는 모양이 됨
곱해지는 수는 1부터 시작해 3진법 수와 곱해서 answer에 더하고 3씩 곱함
*/
function solution(n) {
    var answer = 0;
    var n3=[];
    while(n>0){
        console.log(n);
        n3.push(n%3);
        n=parseInt(n/3);
    }
    var n_3=1;
    for(var i=n3.length-1; i>=0; i--){
        answer+=n3[i]*n_3;
        n_3*=3;
    }
    return answer;
}
