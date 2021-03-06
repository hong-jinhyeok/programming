/*
프로그래머스 소수 찾기
완전탐색 + 소수판별
소수판별 함수를 작성.
길이를 1~numbers의 길이까지 반복문을 돌리며 완전탐색을 진행
-> 만들 수 있는 모든 경우의 수를 찾기 위함.
-> 순서가 바뀌어도 다른 수가 될 수 있음을 고려
-> 중복된 숫자는 거르기 위함 bool배열 선언
*/
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int answer = 0;
bool visit[10000001]={false,};
bool sosu(int num) {
	if (num < 2) return false;
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

void dfs(int len,bool* nvisit, string s, string numbers){
    if(s.length()==len){
        int n=stoi(s);
        if(sosu(n) && !visit[n]) {
            answer++;
            visit[n]=true;
        }
        return;
    }
    for(int i=0; i<numbers.length(); i++){
        if(nvisit[i]==true) continue;
        s.push_back(numbers[i]);
        nvisit[i]=true;
        dfs(len, nvisit, s, numbers);
        s.pop_back();
        nvisit[i]=false;
    }
    return;
}

int solution(string numbers) {
    for(int i=1; i<=numbers.length(); i++){
        string s="";
        bool nvisit[10000001]={false,};
        dfs(i,nvisit,s,numbers);
    }
    return answer;
}
