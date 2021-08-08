/*
프로그래머스 스킬트리
선행스킬을 배워야만 배울 수 있다는 특징
-> 선행스킬들로 지정되어있는 스킬들은 순서가 정해져 있음
선행스킬로 주어진 애들만 골라 내어 순서를 비교
순서가 맞다면 answer+1
*/
function solution(skill, skill_trees) {
    var answer = 0;
    let skcheck = [];
    for(let i=0; i<26; i++) {
        skcheck[i]=false;
    }
    for(let i=0; i<skill.length; i++){
        skcheck[skill[i]] = true;
        //console.log(skill[i],parseInt(skill[i]-'A'));
    }
    for(let i=0; i<skill_trees.length; i++){
        let s = "";
        for(let j=0; j<skill_trees[i].length; j++){
            if(skcheck[skill_trees[i][j]]==true) s=s.concat(skill_trees[i][j]);
        }
        let check=0;
        for(let j=0; j<s.length; j++){
            if(skill[j]!=s[j]) {
                check=1;
                break;
            }
        }
        if(check == 0) answer++;
    }
    return answer;
}
