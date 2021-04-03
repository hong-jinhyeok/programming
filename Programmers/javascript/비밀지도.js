/*
프로그래머스 비밀지도
각 배열의 동일한 index의 수를 2진수로 바꾸어 
각 자리를 더했을 때 1이상이면 #을 아니면 공백을 문자열에 추가함
*/
function solution(n, arr1, arr2) {
    var answer = [];
    var s1=[];
    var s2=[];
    for(var i=0;i<n;i++){
        var k=arr1[i];
        var s=[];
        while(k>0){
            s.push(k%2);
            k=parseInt(k/2);
        }
        while(s.length<n) s.push(0);
        s=s.reverse();
        s1.push(s);
        s=[];
        k=arr2[i]
        while(k>0){
            s.push(k%2);
            k=parseInt(k/2);
        }
        while(s.length<n) s.push(0);
        s=s.reverse();
        s2.push(s);
        var as="";
        for(var j=0; j<n; j++){
            if(s1[i][j]+s2[i][j]>0){
                as+='#';
            }else{
                as+=' ';
            }
        }
        answer.push(as);
    }
    
    return answer;
}
