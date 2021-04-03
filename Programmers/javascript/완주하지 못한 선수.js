/*
프로그래머스 완주하지 못한 선수
완주하지 못한 1명만 찾으면 됨.
sort하여 completion의 이름 기준으로 하나씩 비교
이름이 달르다면 그 idx의 사람이 완주하지 못한 선수.
반복문이 끝났다면 participant의 마지막 선수가 완주하지 못한 선수.
*/
function solution(participant, completion) {
    var answer = '';
    participant.sort();
    completion.sort();
    var i=0;
    for(;  i<completion.length; i++){
        if(participant[i]!=completion[i]) {
            break;
        }
    }
    answer=participant[i];
    return answer;
}
