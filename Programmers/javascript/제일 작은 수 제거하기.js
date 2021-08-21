/*
프로그래머스 제일 작은 수 제거하기
sort하여 제일 작은 수 구하기
그 수를 제외한 나머지를 answer에 삽입
answer가 비었다면 -1 삽입
배열 복사 시 Object.assign을 이용하지 않고 =을 통해 복사하면
주소를 공유하여 값의 변경시 같이 바뀌는 문제 발생
*/
function solution(arr) {
    var answer = [];
    let arr2=Object.assign([],arr);
    arr2.sort(function(a,b){
        return a-b;
    });
    let mini = arr2[0];
    for(let i=0; i<arr.length; i++){
        if(arr[i]!=mini) answer.push(arr[i]);
    }
    if(answer.length==0) answer.push(-1);
    return answer;
}
