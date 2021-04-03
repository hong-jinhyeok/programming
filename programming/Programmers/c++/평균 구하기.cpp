/*
프로그래머스 평균 구하기
arr에 있는 수를 다 더하고 arr의 size로 나눠줌
arr의 size를 double형으로 바꾸어 나누어주어야 함
*/
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int i=0; i<arr.size(); i++){
        answer+=arr[i];
    }
    answer/=(double)(arr.size());
    return answer;
}
