/*
프로그래머스 프린터
작업의 순서가 있는 배열을 index와 함께 다른 배열에 저장
기존 우선순위 배열은 내림차순 정렬
우선순위가 같고 index가 location과 같다면 정지
우선순위만 같다면 각각의 배열의 다음값 호출
모두 틀리다면 복사한 배열의 다음값 호출
*/
function solution(priorities, location) {
    var answer = 0;
    var arr=[];
    for(let i=0; i<priorities.length; i++){
        arr.push([priorities[i],i]);
    }
    priorities.sort(function(a,b){
        return b-a;
    });
    let i=0;
    let j=0;
    while(1){
        if(priorities[j]==arr[i%priorities.length][0]){
            if(arr[i%priorities.length][1]==location){
                answer=j;
                break;
            }
            else {
                j++;
                i++;
            }
        }
        else i++;
    }
    //console.log(arr);
    return answer+1;
}
