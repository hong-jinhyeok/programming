/*
백준 1000 A+B
파일시스템을 이용해 파일을 읽어와서 값을 집어넣음
받아온 값으로 연산
*/
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split(' ');
var a = parseInt(input[0]);
var b = parseInt(input[1]);
console.log(a-b);
