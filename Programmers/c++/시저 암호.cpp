/*
프로그래머스 시저 암호
해당 string의 글자마다 n의 정수만큼 더 해준 문자를 answer에 삽입
n을 더한 문자가 대문자가 Z를 넘어가거나 소문자가 z를 넘어가면 26만큼의 문자값을 빼줌
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            answer.push_back(s[i]);
            continue;
        }
        if('z' < s[i]+n) s[i]-=26;
        else if('Z' < s[i]+n && s[i] <= 'Z') s[i]-=26;
        answer.push_back(s[i]+n);
    }
    return answer;
}
