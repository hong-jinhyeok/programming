/*
프로그래머스 영어 끝말잇기
각 단어를 반복문을 통해 확인.
새로운 배열에 중복단어가 아닌 단어를 순서대로 삽입.
삽입되는 단어의 마지막 알파벳을 저장하여 다음 단어의 첫 알파벳과 비교
중복되었다면 해당 순서를 n으로 나눈 나머지에 1을 더한 값이 걸린 사람
몫에 1을 더한 것이 끝말잇기 차례
*/
function solution(n, words) {
    var answer = [];
    var check=[];
    var spell=words[0].charAt(0);
    for(var i=0; i<words.length; i++){
        if(check.indexOf(words[i])!==-1 || words[i].charAt(0) != spell){
            answer.push((i%n)+1);
            answer.push(parseInt(i/n)+1);
            break;
        }
        else{
            spell=words[i].charAt(words[i].length-1);
            check.push(words[i]);
        }
    }
    if(check.length==words.length){
        answer.push(0);
        answer.push(0);
    }
    return answer;
}
