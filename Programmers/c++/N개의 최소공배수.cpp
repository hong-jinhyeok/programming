/*
프로그래머스 N개의 최소공배수
반복문을 돌며 1부터 확인
벡터에 있는 모든 수로 나눠보며 판별
*/
#include <string>
#include <vector>

using namespace std;

bool check(vector<int> arr, int num){
    for(int i=0; i<arr.size(); i++){
        if(num%arr[i]==0) continue;
        return false;
    }
    return true;
}
int solution(vector<int> arr) {
    int answer = 0;
    for(int i=1; ; i++){
        if(check(arr,i)){
            answer=i;
            break;
        }
    }
    return answer;
}
