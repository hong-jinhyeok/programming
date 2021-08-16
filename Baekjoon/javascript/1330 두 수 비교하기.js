/*
 백준 1330 두 수 비교하기
 두개의 값을 입력받고  크기비교.
 */
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split(' ');
var a = parseInt(input[0]);
var b = parseInt(input[1]);
if(a>b) console.log(">");
else if(a<b) console.log("<");
else if(a==b) console.log("==");
