/*
프로그래머스 기능개발
progresses배열의 값을 완료까지 남은 일수로 바꾸어 작업
현재 progresses값이 이전 progresses값보다 작다면 작업일수+1
작지않다면 date값 push 후 date값 초기화
*/
function solution(progresses, speeds) {
    var answer = [];
    for(let i=0; i<progresses.length; i++){
        progresses[i]=100-progresses[i];
        if(progresses[i]%speeds[i]==0){
            progresses[i]/=speeds[i];
        }else{
            progresses[i]=parseInt(progresses[i]/speeds[i])+1;
        }
    }
    //console.log(progresses);
    let start=progresses[0];
    let date=1;
    for(let i=1; i<progresses.length; i++){
        if(start>=progresses[i]){
            date++;
        }else{
            answer.push(date);
            start=progresses[i];
            date=1;
        }
    }
    answer.push(date);
    return answer;
}
