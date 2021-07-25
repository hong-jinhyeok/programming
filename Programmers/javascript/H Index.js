/*
프로그래머스 H Index
오름차순 정렬 후 비교
i번째 값이 citations의 size-i보다 이상인지 비교
이상이라면 answer
*/
function solution(citations) {
    var answer = 0;
    citations.sort(function(a,b){
        return a-b;
    });
    for(let i=0; i<citations.length; i++){
        let n= citations[i];
        let s=citations.length-i;
        if(s<=n){
            answer=s;
            break;
        }
    }
    return answer;
}
