/*
프로그래머스 짝지어 제거하기
배열을 stack으로 사용.
stack이 비었거나 stack의 top이 현재 문자와 다르다면 stack에 push.
stack의 top과 현재 문자가 같다면 pop진행.
마지막에 stack이 비었다면 1 아니며 0.
*/
function solution(s)
{
    var answer = -1;

    var stk=[];
    
    var len=0;
    while(len<s.length){
        if(stk.length<1){
            stk.push(s[len]);
            len++;
        }else if(stk[stk.length-1]==s[len]){
            len++;
            stk.pop();
        }else{
            stk.push(s[len]);
            len++;
        }
    }
    if(stk.length==0) answer=1;
    else answer=0;
    return answer;
}
