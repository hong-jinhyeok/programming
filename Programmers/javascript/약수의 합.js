/*
프로그래머스 약수의 합
반복문을 통해 나누어 떨어지는 수들을 구하고 다 더함
*/
function solution(n) {
    var answer = 0;
    for(var i=1; i<=n; i++){
        if(n%i==0) answer+=i;
    }
    return answer;
}
