/*
프로그래머스 문자열 내 p와 y의 개수
반복문을 통해 p와 y의 개수를 따로 count
비교후 true false 반환
*/
function solution(s){
    var answer = true;
    var np=0;
    var ny=0;
    for(let i=0; i<s.length; i++){
        if(s[i]=='p' || s[i]=='P') np++;
        else if(s[i]=='y' || s[i]=='Y') ny++
    }
    if(np==ny) return answer;
    return false;
}
