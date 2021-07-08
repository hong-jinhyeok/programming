/*
프로그래머스 가운데 글자 가져오기
홀수면 s.length/2->정수변환
짝수면 s.length/2-1 s.length/2 
글자 가져오기
*/
function solution(s) {
    var answer = '';
    if(s.length%2==0){
        answer=s[s.length/2-1]+s[s.length/2];
    }else{
        answer=s[parseInt(s.length/2)];
    }
    return answer;
}
