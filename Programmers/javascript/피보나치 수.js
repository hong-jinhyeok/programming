/*
프로그래머스 피보나치 수
DP를 사용.
1차원 배열에 수를 계산하여 저장하고 answer에 n번째 피보나치 수만 저장
*/
function solution(n) {
    var answer = 0;
    var arr=[]
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    for(let i=3; i<100001; i++){
        arr[i]=(arr[i-1]+arr[i-2])%1234567;
    }
    answer=arr[n];
    return answer;
}
