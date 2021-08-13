/*
백준 2501 약수 구하기
반복문을 통해 약수를 모두 구하여 배열에 저장
배열의 길이보다 k가 크다면 알맞은 값을 출력
k가 크다면 0을 출력
*/
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split(' ');
var n = parseInt(input[0]);
var k = parseInt(input[1]);
let v=[];
for(let i=1; i<=n; i++) if(a%i==0) v.push(i);
if(v.length<k) console.log("0");
else console.log(v[k-1]);