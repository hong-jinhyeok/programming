/*
프로그래머스 가장 큰 수
숫자를 문자로 변환 후 5번(최대가 100000이기 때문)을 이어붙이고 정렬
정렬된 숫자들의 원본 숫자를 문자로 바꾸어 이어붙이면 가장 큰 수가 됨.
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) {
    vector<pair<string,int>> num;
    for(int i=0; i<numbers.size(); i++){
        string s="";
        for(int j=0; j<5; j++) s+=to_string(numbers[i]);
        num.push_back(make_pair(s,i));
    }
    sort(num.begin(),num.end(),greater<>());
    string s="";
    for(int i=0; i<num.size(); i++){
        int idx=num[i].second;
        if(numbers[idx]==0 && s.length()==0) continue;
        s+=to_string(numbers[idx]);
    }
    if(s.length()==0) s="0";
    return s;
}
