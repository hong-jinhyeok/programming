/*
프로그래머스 수박수박수박수박수박수?
반복문을 사용하여 1부터 n까지 진행
i가 홀수면 수, 짝수면 박을 삽입
*/
function solution(n) {
    var answer = '';
    for(var i=0; i<n; i++){
        if(i%2==0) {
            answer+="수";
        }
        else {
            answer+="박";
        }
    }
    return answer;
}
