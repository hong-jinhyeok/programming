/*
프로그래머스 카펫
갈색과 노란색 칸의 수를 더해 전체 사각형의 크기를 알아냄
알아낸 사각형의 크기로 가로와 세로의 경우의 수를 판별
(가로-2) * (세로-2) = 노란색 칸의 수가 나오는 짝을 찾아서 반환 
*/
function solution(brown, yellow) {
    var answer = [];
    var square = brown+yellow;
    var h=3;
    var w=parseInt(square/h);
    while(w>=h){
        if(h*w==square){
            if((h-2)*(w-2)==yellow){
                answer.push(w);
                answer.push(h);
                break;
            }
        }
        h++;
        w=parseInt(square/h);
    }
    return answer;
}
