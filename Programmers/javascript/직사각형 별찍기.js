/*
프로그래머스 직사각형 별찍기
간단한 이중포문 문제
*/
process.stdin.setEncoding('utf8');
process.stdin.on('data', data => {
    const n = data.split(" ");
    const a = Number(n[0]), b = Number(n[1]);
    let st="";
    for(let i=0; i<a; i++){
        st=st.concat('*');
    }
    for(let i=0; i<b; i++) console.log(st);
});
