/*
프로그래머스 전화번호 목록
phone_book 정렬
지금 현재 문자열과 다음 문자열 중 길이가 긴 것을 짧은 것의 길이 만큼 자름.
두개를 비교 후 같으면 false
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0; i<phone_book.size()-1; i++){
        string s1,s2;
        if(phone_book[i].length()>phone_book[i+1].length()){
            int len=phone_book[i+1].length();
            s1=phone_book[i].substr(0,len);
            s2=phone_book[i+1];
        }else{
            int len=phone_book[i].length();
            s1=phone_book[i+1].substr(0,len);
            s2=phone_book[i];
        }
        if(s1.compare(s2)==0) answer=false;
    }
    return answer;
}
