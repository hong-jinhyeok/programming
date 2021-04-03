/*
프로그래머스 문자열을 정수로 바꾸기
-일 경우 숫자를 제외한 모든 문자를 삭제 후 정수 변환 및 음수 변환
아닐 경우 숫자를 제외한 모든 문자를 삭제 후 정수 변환
*/
function solution(s) {
    var answer = 0;
    for(var i=0; i<s.length; i++){
        if(s.charAt(0)=='-'){
            answer=s.replace(/[^0-9]/g,'');
            answer=parseInt(answer);
            answer=answer*-1;
        }else{
            answer=s.replace(/[^0-9]/g,'');
            answer=parseInt(answer);
        }
    }
    return answer;
}
