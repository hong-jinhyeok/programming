/*
프로그래머스 나누어 떨어지는 숫자 배열
나눴을 때 나머지가 0이면 vector에 담고
마지막에 sort.
*/
function solution(arr, divisor) {
    var answer = [];
    for(var i=0; i<arr.length; i++){
        if(arr[i]%divisor==0) answer.push(arr[i]);
    }
    if(answer.length==0) answer.push(-1);
    answer.sort(function(a,b){
        return a-b;
    });
    return answer;
}
