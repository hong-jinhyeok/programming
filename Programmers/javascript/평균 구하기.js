/*
프로그래머스 평균 구하기
arr에 있는 수를 다 더하고 arr의 length로 나눠줌
*/
function solution(arr) {
    var answer = 0;
    for(var i=0; i<arr.length; i++){
        answer+=arr[i];
    }
    answer= answer/arr.length;
    return answer;
}
