/*
프로그래머스 구명보트
최대 2명이 탈 수 있다 
-> 무게별로 sort후 가장 무거운 사람과 가장 가벼운 사람을 더했을 때 한계치가 나오는지 판별
-> 한계치가 넘는다면 혼자타야함.
-> 한계치를 넘지않는다면 같이 탐.
*/
function solution(people, limit) {
    var answer = 0;
    people.sort(function(a,b){
        return a-b;
    });
    console.log(people);
    var sum=0;
    let start=0;
    let end=people.length-1;
    
    while(start<=end){
        if(people[start]+people[end]<=limit){
            answer++;
            start++;
            end--;
        }else{
            answer++;
            end--;
        }
    }
    
    return answer;
}