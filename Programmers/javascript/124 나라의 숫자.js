/*
프로그래머스 124 나라의 숫자
3진수를 변형한 문제.
나머지가 0이하 라면 다음 자리를 -1하고 4혹은 2로 표현
다음 자리에서 값을 빌려온다고 생각(0 -> 4, -1 -> 2)
*/
function solution(n) {
    var s = '';
    var v=[];
    while(n>0){
        v.push(n%3);
        n=parseInt(n/3);
    }
    for(let i=0; i<v.length-1; i++){
        if(v[i]<1){
            v[i+1]--;
            if(v[i]==0) s=s.concat('4');
            else s=s.concat('2');
        }else{
            s=s.concat(v[i]);
        }
    }
    if(v[v.length-1]!=0) {
        s=s.concat(v[v.length-1]);
    }
    s=s.split("").reverse().join("");
    return s;
}
