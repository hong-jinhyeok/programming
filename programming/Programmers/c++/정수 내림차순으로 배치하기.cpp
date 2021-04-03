/*
프로그래머스 정수 내림차순으로 배치하기
long long형 vector를 선언
각 자리 숫자를 vector에 삽입
vector 정렬 후 앞의 숫자부터 1 10 100 ... 순으로 곱해서 answer에 더함
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    sort(v.begin(),v.end());
    long long a=1;
    for(int i=0; i<v.size(); i++){
        answer += v[i]*a;
        a*=10;
    }
    return answer;
}
