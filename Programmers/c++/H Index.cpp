/*
프로그래머스 H Index
오름차순 정렬 후 비교
i번째 값이 citations의 size-i보다 이상인지 비교
이상이라면 answer에 초기화 후 break
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end());
    for(int i=0; i<citations.size(); i++){
        int n=citations[i];
        int s=citations.size()-i;
        if(s<=n) {
            answer=s;
            break;
        }
    }
    return answer;
}
