/*
프로그래머스 체육복
기본적으로 모든 학생이 체육복을 하나씩 가졌다고 판단
->index를 1~n까지 사용하기 위해 vector의 크기를 n+1로 하고 1로 모두 초기화
lost한 학생은 -1을 reserve한 학생은 +1을 하여 체육복 다시 초기화
반복문을 통해 순회하면서 빌리는 순서를 앞사람을 먼저 체크하고 뒷사람을 나중에 체크하여 빌리도록함
*/
function solution(n, lost, reserve) {
    var answer = 0;
    var student=[];
    for(var i=0; i<=n; i++){
        student.push(1);
    }
    student[0]=0;
    for(i=0; i<lost.length; i++){
        student[lost[i]]--;
    }
    for(i=0; i<reserve.length; i++){
        student[reserve[i]]++;
    }
    for(i=1; i<=n; i++){
        if(student[i]==0 && student[i-1]==2){
            student[i-1]--;
            student[i]++;
        } else if(i!=n && student[i]==0 && student[i+1]==2){
            student[i+1]--;
            student[i]++;
        }
    }
    for(i=1; i<=n; i++){
        if(student[i]>0) answer++;
    }
    return answer;
}
