/*
백준 10610 30
30의 배수 찾기
30 -> 3과 10의 배수
10의 배수 -> 0이 하나라도 있으면 됨
3의 배수 -> 모든 자릿수 합이 3의 배수
두 조건 체크 후 입력받은 문자열을 내림차순으로 정렬
*/
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool zero=false;
    int sum=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0') zero=true;
        sum+=(s[i]-'0');
    }
    if(zero && sum%3==0) {
        sort(s.begin(),s.end(),greater<>());
        cout<< s;
    }else{
        cout << "-1";
    }
    return 0;
}
