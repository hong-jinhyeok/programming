/*
프로그래머스 타겟 넘버
주어진 수들로 target과 같은 수를 만들 수 있는 경우의 수 찾기
input의 범위가 크지 않으므로 queue를 이용하여 모든 경우를 탐색
하나의 숫자로 할 수 있는 경우->더하거나 빼기를 반복
모든 경우의 수를 구한 다음 target과 같은 수를 count
유의사항으로 shift함수를 쓰게 되면 시간초과가 일어나므로 index를 나타내는 변수를 선언하여 사용
*/
function solution(numbers, target) {
    var an = 0;
    let q=[numbers[0],numbers[0]*-1];
    for(let i=1; i<numbers.length; i++){
        let q_s=[];
        let j=0;
        while(q.length>j){
            let n=q[j];
            j++;
            q_s.push(n+numbers[i]);
            q_s.push(n-numbers[i]);
        }
        q=q_s;
    }
    let j=0;
    while(q.length>j){
        let n=q[j];
        j++;
        if(n==target) an++;
    }
    return an;
}
