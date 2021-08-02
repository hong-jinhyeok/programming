/*
프로그래머스 예산
최대로 지원할 수 있는 방법 -> 가장 작은 예산을 가진 부서부터 차례로 지원
sort후 지급
*/
function solution(d, budget) {
    var answer = 0;
    d.sort(function(a,b){
        return a-b;
    });
    for(let i=0; i<d.length; i++){
        if(d[i]<=budget){
            budget-=d[i];
            answer++;
        }else break;
    }
    return answer;
}
