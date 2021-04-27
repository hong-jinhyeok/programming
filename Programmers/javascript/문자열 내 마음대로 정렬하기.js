/*
프로그래머스 문자열 내 마음대로 정렬하기
주어진 문자열을 2가지 기준으로 비교하여 sort
1. n번째 문자로 정렬
2. n번째 문자가 같다면 사전순서로 정렬
*/
function solution(strings, n) {
    var answer = strings;
    
    answer.sort(function(a,b){
        if(a[n]<b[n]) return -1;
        else if(a[n]==b[n]) {
            if(a<b) return -1;
        }
    });
    
    return answer;
}
