/*
프로그래머스 두 개 뽑아서 더하기
숫자 2개를 뽑아서 더한 수들을 오름차순으로 반환.
중복의 숫자는 제외하고 answer에 삽입
마지막에 sort함수를 통해 오름차순 정렬.
*/
function solution(numbers) {
    var answer = [];
    for(var i=0; i<numbers.length-1; i++){
        for(var j=i+1; j<numbers.length; j++){
            var  n=numbers[i]+numbers[j];
            if(answer.indexOf(n)==-1){
                answer.push(n);
            }
        }
    }
    answer.sort(function(a, b)  {
        return a - b;
    });
    return answer;
}
