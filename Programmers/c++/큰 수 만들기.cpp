
/*
프로그래머스 큰 수 만들기
1. stack에 넣으면서 stack의 탑이 비교되는 수보다 작다면 pop후 다시 top과 비교
-> top이 크다면 push
2. k개만큼 pop했다면 계속 push
3. number비교가 끝나고 k만큼 삭제가 됐다면 reverse 후 반환
4. k 만큼 삭제가 안됐다면 stack에 넣으면서 top과 비교
5. top 이하면 pop 후 다시 top과 비교
6. k개 만큼 pop했다면 계속 push
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

string solution(string number, int k) {
    string answer="";
    stack<char> s;
    int i=0;
    int check=0;
    while(i<number.length()){
        if(s.empty()) {
            s.push(number[i]);
            i++;
        }else if(check<k && s.top()<number[i]){
            s.pop();
            check++;
        }else{
            s.push(number[i]);
            i++;
        }
    }
    string ss="";
    while(!s.empty()){
        ss.push_back(s.top());
        s.pop();
    }
    if(check<k){
        cout << ss << endl;
        i=0;
        while(i<ss.length()){
            if(s.empty()) {
                s.push(ss[i]);
                i++;
            }else if(check<k && s.top()<=ss[i]){
                s.pop();
                check++;
            }else{
                s.push(ss[i]);
                i++;
            }
        }
        while(!s.empty()){
            answer.push_back(s.top());
            s.pop();
        }
    }else{
        reverse(ss.begin(),ss.end());
        answer=ss;
    }
    
    return answer;
}
