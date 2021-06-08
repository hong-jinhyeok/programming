/*
백준 2847 게임을 만든 동준이
가장 끝의 숫자가 가장 커야함
-> 가장 오른쪽부터 이전 숫자와 비교
-> 오른쪽의 숫자가 작다면 왼쪽 수를 계속해서 -1씩 실행
-> 왼쪽 숫자가 첫번째 숫자이고 조건 만족시 끝
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int answer=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i=v.size()-1; i>0;){
        if(v[i]>v[i-1]){
            i--;
            continue;
        }
        answer++;
        v[i-1]--;
    }
    cout << answer;
    return 0;
}
