/*
프로그래머스 음양 더하기
vector에 있는 수를 true일 땐 더하고
false일 땐 빼며 연산
*/
function solution(absolutes, signs) {
    var answer = 0;
    for(let i=0; i<signs.length; i++){
        if(signs[i]==true){
            answer+=absolutes[i];
        }else{
            answer-=absolutes[i];
        }
    }
    return answer;
}
