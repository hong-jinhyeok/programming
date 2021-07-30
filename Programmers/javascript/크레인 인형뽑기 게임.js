/*
프로그래머스 크레인 인형뽑기 게임
2차원 배열값으로 인형의 위치와 종류가 주어지고 1차원 배열로 뽑는 순서가 주어짐.
인형이 있는 위치를 반복문을 통해 찾음->0이 아닌 위치
스택에 인형이 없거나 top의 인형과 다르다면 push
같다면 pop 동작+answer은 +2
작업이 끝난 인형은 0으로 초기화->인형이 없는 위치는 0
*/
function solution(board, moves) {
    var answer = 0;
    let s=[];
    let loc=0;
    let target=0;
    
    for(let i=0; i<moves.length; i++){
        for(let j=0; j<board.length; j++){
            if(board[j][moves[i]-1]!=0){
                target=board[j][moves[i]-1];
                board[j][moves[i]-1]=0;
                break;
            }
        }
        if(target!=0 && target==s[loc-1]){
            loc--;
            target=0;
            answer+=2;
        }else{
            s[loc++]=target;
            target=0;
        }
    }
    return answer;
}
