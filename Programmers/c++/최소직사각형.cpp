/*
프로그래머스 최소직사각형
가로 세로 중 긴쪽을 담는 벡터와 짧은 쪽을 담는 벡터를 만들어 숫를 삽입
내림차순으로 정렬
두 벡터의 가장 앞의 수를 곱
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> r;
    vector<int> c;
    for(int i=0;i<sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]){
            r.push_back(sizes[i][0]);
            c.push_back(sizes[i][1]);
        }else{
            c.push_back(sizes[i][0]);
            r.push_back(sizes[i][1]);
        }
    }
    sort(r.begin(),r.end(),greater<>());
    sort(c.begin(),c.end(),greater<>());
    answer = r[0]*c[0];
    return answer;
}
