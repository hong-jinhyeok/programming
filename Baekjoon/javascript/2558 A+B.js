/*
백준 2558 A+B -2
A+B 실행
*/
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split('\n');
var a = parseInt(input[0]);
var b = parseInt(input[1]);
console.log(a+b);