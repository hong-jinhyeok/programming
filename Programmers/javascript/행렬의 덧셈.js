/*
프로그래머스 행렬의 덧셈
이중반복문을 통해 같은 위치의 행렬값을 더함
*/
function solution(arr1, arr2) {
    var answer = [];
    for(var i=0; i<arr1.length; i++){
        let v=[];
        for(var j=0; j<arr1[0].length; j++){
            v.push(arr1[i][j]+arr2[i][j]);
        }
        answer.push(v);
    }
    return answer;
}
