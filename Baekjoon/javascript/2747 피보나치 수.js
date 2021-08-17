/*
백준 2747 피보나치 수
dp를 사용하여 해결
dp배열에 최대 숫자인 45까지의 피보나치 수의 합을 구해놓고 알맞은 수를 출력
*/
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split(' ');
var a = parseInt(input[0]);

let dp=[];
dp[0]=0;
dp[1]=1;
dp[2]=1;

for(let i=3; i<=45; i++) dp[i]=dp[i-1]+dp[i-2];

console.log(dp[a]);
