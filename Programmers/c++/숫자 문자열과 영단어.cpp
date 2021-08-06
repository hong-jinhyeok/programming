/*
프로그래머스 숫자 문자열과 영단어
1. 숫자면 바로 push
2. 문자면 sub 문자열에 삽입
3. 문자열이 완성된 단어면 숫자로 변화 후 push
3가지 규칙에 의거 코드 작성
막지막에 sub가 남아있다면 문자열 검사 후 push
*/
#include <string>
#include <vector>

using namespace std;

char changeNum(string s){
    if(s.compare("zero")==0) return '0';
    else if(s.compare("one")==0) return '1';
    else if(s.compare("two")==0) return '2';
    else if(s.compare("three")==0) return '3';
    else if(s.compare("four")==0) return '4';
    else if(s.compare("five")==0) return '5';
    else if(s.compare("six")==0) return '6';
    else if(s.compare("seven")==0) return '7';
    else if(s.compare("eight")==0) return '8';
    else if(s.compare("nine")==0) return '9';
}

bool checkNum(string s){
    if(s.compare("zero")==0) return true;
    else if(s.compare("one")==0) return true;
    else if(s.compare("two")==0) return true;
    else if(s.compare("three")==0) return true;
    else if(s.compare("four")==0) return true;
    else if(s.compare("five")==0) return true;
    else if(s.compare("six")==0) return true;
    else if(s.compare("seven")==0) return true;
    else if(s.compare("eight")==0) return true;
    else if(s.compare("nine")==0) return true;
    return false;
}

int solution(string s) {
    int answer = 0;
    string sub ="";
    string ans = "";
    for(int i=0; i< s.length(); i++){
        if(checkNum(sub)) {
            ans.push_back(changeNum(sub));
            sub="";
        }
        if('0'<=s[i] && s[i]<='9'){
            ans.push_back(s[i]);
        }
        else{
            sub.push_back(s[i]);
        }
    }
    if(checkNum(sub)) ans.push_back(changeNum(sub));;
    answer=stoi(ans);
    return answer;
}
