/*
프로그래머스 실패율
각 스테이지 별로 머물고 있는 플레이어 수를 배열에 저장
각 스테이지 별로 실패율을 계산 후 stage number와 함께 pair의 형태로 저장
실패율을 기준으로 내림차순으로 sort
answer에 순서대로 삽입
*/
function solution(N, stages) {
    var answer = [];
    let stg=stages.length;
    let player =[];
    for(let i=0; i<501; i++){
        player[i]=0;
    }
    player[0]=stg;
    for(let i=0; i<stg; i++){
        player[stages[i]]++;
    }
    let v=[];
    for(let i=1; i<=N; i++){
        let rate = player[i]/player[0];
        let pair={
            first:i,
            second:rate
        };
        v.push(pair);
        player[0]-=player[i];
    }
    for(let i=0; i<N; i++){
        for(let j=0; j<N-i-1; j++){
            if(v[j].second < v[j+1].second){
                let p=v[j];
                v[j]=v[j+1];
                v[j+1]=p;
            }
        }
    }
    for(let i=0; i < N; i++){
        answer.push(v[i].first);
    }
    return answer;
}
