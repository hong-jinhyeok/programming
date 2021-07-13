/*
프로그래머스 소수 찾기
완전탐색 + 소수판별
소수판별 함수를 작성.
길이를 1~numbers의 길이까지 반복문을 돌리며 완전탐색을 진행
-> 만들 수 있는 모든 경우의 수를 찾기 위함.
-> 순서가 바뀌어도 다른 수가 될 수 있음을 고려
-> 중복된 숫자는 거르기 위함 bool배열 선언
*/
var answer=0;
var visit=[];
var nvisit=[];

function sosu(num){
    if(num<2) return false;
    let a =parseInt(Math.sqrt(num));
    for(let i=2; i<=a; i++) if(num%i==0) return false;
    return true;
}

function dfs(len,s,numbers){
    if(s.length==len){
        let n=parseInt(s);
        if(sosu(n) && !visit[n]){
            answer++;
            visit[n]=true;
        }
        return;
    }
    for(let i=0; i<numbers.length; i++){
        if(nvisit[i]==true) continue;
        let ss=s.concat(numbers[i]);
        nvisit[i]=true;
        dfs(len,ss,numbers);
        nvisit[i]=false;
    }
    return;
}


function solution(numbers) {
    for(let i=0; i<10000001; i++) {
        visit[i]=false;
        nvisit[i]=false;
    }
    for(let i=1; i<=numbers.length; i++){
        let s="";
        dfs(i,s,numbers);
    }
    return answer;
}
