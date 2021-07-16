/*
프로그래머스 N개의 최소공배수
반복문을 돌며 1부터 확인
벡터에 있는 모든 수로 나눠보며 판별
*/
function checkValue(arr,answer){
    for(let i=0; i<arr.length; i++){
        if(answer%arr[i]==0) continue;
        return false;
    }
    return true;
}
function solution(arr) {
    let answer = 1;
    while(!checkValue(arr,answer)){
        answer++;
    }
    return answer;
}
