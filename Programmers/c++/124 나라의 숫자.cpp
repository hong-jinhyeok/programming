/*
프로그래머스 124 나라의 숫자
3진수를 변형한 문제.
나머지가 0이하 라면 다음 자리를 -1하고 4혹은 2로 표현
다음 자리에서 값을 빌려온다고 생각(0 -> 4, -1 -> 2)
*/
#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(int n) {
    string s = "";
    vector<int> v;
    while(n>0){
        v.push_back(n%3);
        n/=3;
    }
    
    for(int i=0; i<v.size()-1; i++){
        if(v[i]<1){
            v[i+1]--;
            if(v[i]==0) s.push_back('4');
            else s.push_back('2');
        }else{
            s.push_back(v[i]+'0');
        }
    }
    if(v[v.size()-1]!=0) s.push_back(v[v.size()-1]+'0');
    reverse(s.begin(),s.end());
    return s;
}
