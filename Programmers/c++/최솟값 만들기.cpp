/*
프로그래머스 최솟값 만들기
최솟값이 되는 조건
-> 두 벡터의 가장 작은 값과 가장 큰값이 곱해져서 더해지도록 한다
-> 하나는 오름차순 하나는 내림차순으로 정렬 후 반복문을 통해 곱하고 더함
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<>());
    for(int i=0; i<A.size(); i++){
        int n=A[i]*B[i];
        answer+=n;
    }
    return answer;
}
