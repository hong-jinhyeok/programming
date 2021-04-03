/*
백준 1439 뒤집기
반복문을 통해 접근
0으로 만들 경우와 1로 만들경우 두가지 경우를 비교
더 작은 경우를 출력
*/
#include <iostream>
#include <string>
using namespace std;

int zerocount=0;
int onecount=0;

void makezero(int idx, string& s){
    zerocount++;
    for(int i=idx; i<s.length();i++){
        if(s[i]=='0') break;
        s[i]='0';
    }
}

void makeone(int idx, string& s){
    onecount++;
    for(int i=idx; i<s.length();i++){
        if(s[i]=='1') break;
        s[i]='1';
    }
}

int main()
{
    string s;
    cin >> s;
    string s1=s,s2=s;
    for(int i=0; i<s1.length(); i++){
        if(s1[i]=='1') makezero(i,s1);
        if(s2[i]=='0') makeone(i,s2);
    }
    if(zerocount<onecount) cout << zerocount;
    else cout << onecount;
    return 0;
}
