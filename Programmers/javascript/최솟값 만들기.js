/*
프로그래머스 최솟값 만들기
최솟값이 되는 조건
-> 두 벡터의 가장 작은 값과 가장 큰값이 곱해져서 더해지도록 한다
-> 하나는 오름차순 하나는 내림차순으로 정렬 후 반복문을 통해 곱하고 더함
*/
function solution(A,B){
    var answer = 0;

    A.sort(function(a,b){
        return a-b;
    });
    B.sort(function(a,b){
        return b-a;
    });
    for(let i=0; i<A.length; i++){
        answer+=(A[i]*B[i]);
    }
    return answer;
}
