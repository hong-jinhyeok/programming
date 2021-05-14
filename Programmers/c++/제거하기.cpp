/*
프로그래머스 제거하기
stack을 사용.
stack이 비었거나 stack의 top이 현재 문자와 다르다면 stack에 push.
stack의 top과 현재 문자가 같다면 pop진행.
마지막에 stack이 비었다면 1 아니며 0.
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(st.empty()) st.push(s[i]);
        else{
            if(st.top()==s[i]) st.pop();
            else st.push(s[i]);
        }
    }
    
    if(st.empty()) answer=1;
    return answer;
}
