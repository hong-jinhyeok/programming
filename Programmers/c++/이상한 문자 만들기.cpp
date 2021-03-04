/*
프로그래머스 이상한 문자 만들기
단어마다 새로운 인덱스를 적용해야함
공백이 있을 시 인덱스를 초기화 해줌
짝수는 소문자로 홀수는 대문자로 바꾸며 삽입
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int j=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ') {
            answer.push_back(s[i]);
            j=0;
            continue;
        }
        else if(j%2==1){
            if('A'<=s[i] && s[i]<='Z') answer.push_back(s[i]+32);
            else answer.push_back(s[i]);
        }else{
            if('a'<=s[i] && s[i]<='z') answer.push_back(s[i]-32);
            else answer.push_back(s[i]);
        }
        j++;
    }
    return answer;
}
