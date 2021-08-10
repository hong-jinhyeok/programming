/*
프로그래머스 상호 평가
처음 주어지는 2차원 벡터 scores를 대각선으로 대칭하여 값을 바꾸어 진행
평균을 구하여 학점을 반환하는 함수 작성
평균을 구하는 함수에는 자신의 상호평가 점수 벡터와 자신의 점수를 인자로 넘김
함수 내부에서 자신의 상효평가 점수를 sort 후 
자신의 점수가 유일한 최고점 혹은 최저점인지 판별
자신의 점수를 제외 혹은 포함하여 알맞은 평균을 구하고 알맞은 학점을 반환
*/
function Avg(v, my){
    let sum=0;
    let Size=v.length;
    v.sort(function(a,b){
        return a-b;
    });
    if((v[0]==my&&v[1]!=my) || (v[v.length-1]==my && v[v.length-2]!=my)) {
        Size--;
        sum-=my;
    }
    for(let i=0; i<v.length; i++){
        sum+=v[i];
    }
    let avg = sum/Size;
    if(avg>=90) return 'A';
    if(avg>=80) return 'B';
    if(avg>=70) return 'C';
    if(avg>=50) return 'D';
    return 'F';
}

function solution(scores) {
    var answer = "";
    let v=[];
    for(let i=0; i<scores.length;i++){
        let sv=[];
        for(let j=0; j<scores.length; j++){
            sv.push(scores[j][i]);
        }
        v.push(sv);
    }
    for(let i=0; i<scores.length; i++){
        answer=answer.concat(Avg(v[i],v[i][i]));
    }
    return answer;
}