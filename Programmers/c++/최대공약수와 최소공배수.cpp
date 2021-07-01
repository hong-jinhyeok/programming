/*
프로그래머스 최대공약수와 최소공배수
최대공약수를 먼저 구하고
최소공배수는 최대공약수를 이용하여 구함
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a=0,b=1;
    int g,s;
    if(n>m){
        g=n;
        s=m;
    }else{
        g=m;
        s=n;
    }
    for(int i=1;i<=g;i++){
        if(s%i==0 && g%i==0) {
            a=i;
        }
    }
    answer.push_back(a);
    answer.push_back(a*(s/a)*(g/a));
    return answer;
}
