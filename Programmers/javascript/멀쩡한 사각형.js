/*
프로그래머스 멀쩡한 사각형
직사각형에서 대각선으로 그을시 멀쩡한 사각형의 개수
-> w*h - (w/최대공약수 + h/최대공약수 -1) * 최대공약수
몫만 남기기 위해 parseInt를 사용
*/
function gcd( a, b)
{
	let c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

function solution(w, h) {
    var answer = 0;
    let nw=parseInt(w/gcd(w,h));
    let nh=parseInt(h/gcd(w,h));
    let m=parseInt(nw+nh-1)*parseInt(gcd(w,h));
    answer=parseInt(w)*parseInt(h)-m;
    return answer;
}
