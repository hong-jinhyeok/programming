/*
내적
반복문을 통해 내적공식을 적용
*/
function solution(a, b) {
    var answer = 0;
    for(var i=0; i<a.length; i++){
        var n=a[i]*b[i];
        answer=answer+n;
    }
    return answer;
}
