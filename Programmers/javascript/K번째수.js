/*
프로그래머스 K번째수
새로운 벡터에 array에서 골라야하는 숫자들을 삽입.
sort 후 k번 째 수만 answer에 삽입.
*/
function solution(array, commands) {
    var answer = [];
    let n = commands.length;
    for(let i=0; i<n; i++){
        let arr =[];
        for(let j=commands[i][0]-1; j<commands[i][1]; j++){
            arr.push(array[j]);
        }
        arr.sort(function(a,b){
           return a-b; 
        });
        answer.push(arr[commands[i][2]-1]);
    }
    return answer;
}
