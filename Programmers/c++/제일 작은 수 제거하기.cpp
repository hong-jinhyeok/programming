/*
프로그래머스 제일 작은 수 제거하기
sort하여 제일 작은 수 구하기
그 수를 제외한 나머지를 answer에 삽입
answer가 비었다면 -1 삽입
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> arr2=arr;
    sort(arr2.begin(), arr2.end());
    int mini=arr2[0];
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]!=mini) answer.push_back(arr[i]);
    }
    if(answer.size()==0) answer.push_back(-1);
    return answer;
}
