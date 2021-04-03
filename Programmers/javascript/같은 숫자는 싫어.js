/*
프로그래머스 같은 숫자는 싫어
첫 숫자는 삽입.
두번 째부터는 벡터의 마지막 삽입 숫자와 비교하면서 다를 경우 삽입
*/
function solution(arr)
{
    var answer = [];
    answer.push(arr[0]);
    var idx=0;
    for(var i=1; i<arr.length; i++) {
        if(answer[idx]==arr[i]) continue;
        else{
            answer.push(arr[i]);
            idx++;
        }
    }
    return answer;
}
