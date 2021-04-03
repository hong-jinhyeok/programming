/*
프로그래머스 두 정수 사이의 합
두 정수 사이의 합은 두수를 더한갑과 뺀값+1의 곱을 2로 나눈 것과 같음
*/
function solution(a, b) {
    var answer = 0;
    answer=(a+b)/2;
    if(a>b) answer=answer*(a-b+1);
    else answer=answer*(b-a+1);
    return answer;
}