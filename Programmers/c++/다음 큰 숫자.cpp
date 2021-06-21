/*
프로그래머스 다음 큰 숫자
string의 형태로 2진수 변환
맨 앞자리에 0을 추가 -> 자리수가 넘어갈 수 있으므로
01이 되는 부분 중 가장 오른쪽에 있는 부분을 찾음
찾은 위치 전까지 그대로 문자열을 복사
1을 삽입
뒤의 문자는 남은 1의 개수만큼 빼고 0을 먼저 삽입
1의 남은 개수만큼 1을 삽입
10진수로 변환.
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    int num=n;
    string s="";
    string sAnswer="";
    int oneCount=0;
    while(num>0){
        s.push_back(num%2+'0');
        if(num%2==1) oneCount++;
        num/=2;
    }
    s.push_back('0');
    reverse(s.begin(), s.end());
    int nextOne=0;
    for(int i=1; i<s.length(); i++){
        if(s[i-1]=='0' && s[i]=='1'){
            nextOne=i-1;
        }
    }
    for(int i=0; i<nextOne; i++) {
        sAnswer.push_back(s[i]);
        if(s[i]=='1') oneCount--;
    }
    sAnswer.push_back('1');
    oneCount--;
    for(int i=nextOne+1; i<s.length()-oneCount; i++) sAnswer.push_back('0');
    for(int i=0; i<oneCount; i++) sAnswer.push_back('1');
    int value=1;
    for(int i=sAnswer.length()-1; i>=0; i--){
        answer+=(value*(sAnswer[i]-'0'));
        value*=2;
    }
    return answer;
}
