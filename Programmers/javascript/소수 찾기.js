/*
프로그래머스 소수 찾기
에라스토테네스의 체를 사용.
에라스토테네스의 체 -> 소수를 찾고 소수의 배수의 수를 모두 제거하는 방식.
제곱근은 Math.sqrt함수를 사용.
*/
function solution(n) {
    var answer = 0;
    var number=[];
    for(let i=0; i<=n; i++){
        number[i]=1;
    }
    for(let i=2; i<=parseInt(Math.sqrt(n)); i++){
        if(number[i]==0) continue;
        for(let j= i*i; j<=n; j+=i){
            number[j]=0;
        }
    }
    for(let i=2; i<=n; i++){
        if(number[i]!=0) answer++;
    }
    return answer;
}
