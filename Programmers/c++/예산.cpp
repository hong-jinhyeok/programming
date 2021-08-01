/*
프로그래머스 예산
최대로 지원할 수 있는 방법 -> 가장 작은 예산을 가진 부서부터 차례로 지원
sort후 지급
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    for(int i=0; i<d.size(); i++){
        if(d[i]<=budget){
            budget-=d[i];
            answer++;
        }else break;
    }
    return answer;
}
