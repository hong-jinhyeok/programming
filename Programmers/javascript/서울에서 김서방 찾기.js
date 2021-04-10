/*
프로그래머스 서울에서 김서방 찾기
반복문을 통해 seoul 배열을 탐색하며
비교를 통해 Kim을 찾음
*/
function solution(seoul) {
    var answer = '';
    for(var i=0; i<seoul.length; i++){
        if(seoul[i]==="Kim"){
            answer="김서방은 "+i+"에 있다";
            break;
        }
    }
    return answer;
}
