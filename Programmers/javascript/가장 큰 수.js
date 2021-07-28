/*
프로그래머스 가장 큰 수
숫자를 문자로 변환 후 5번(최대가 100000이기 때문)을 이어붙이고 정렬
정렬된 숫자들의 원본 숫자를 문자로 바꾸어 이어붙이면 가장 큰 수가 됨.
자바스크립트에서 문자열의 오름차순, 내림차순은 연산자를 통해 일일이 계산해주어야함
*/

function solution(numbers) {
    var answer = '';
    let num=[];
    for(let i=0; i<numbers.length; i++){
        let s="";
        for(let j=0; j<5; j++) s=s.concat(numbers[i]);
        let pair={
            first:s,
            second:i
        };
        num.push(pair);
    }
    num.sort(function(a,b){
        return a.first >  b.first ? -1  :  a.first < b.first ? 1 : 0;
    });
   // console.log(num);
    for(let i=0; i<num.length; i++){
        let idx=num[i].second;
        if(numbers[idx]==0 && answer.length==0) continue;
        answer=answer.concat(numbers[idx]);
    }
    if(answer == "") answer="0";
    return answer;
}
