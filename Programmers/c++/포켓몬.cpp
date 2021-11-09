/*
프로그래머스 포켓몬
벡터를 순회하면서 중복된 포켓몬의 경우 bool형 배열로 판별하여 체크
중복되지 않은 포켓몬 수를 카운트 하되 N/2가 되면 break
*/
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int c = nums.size()/2;
    int cc = c;
    bool visit[200001] = {false,};
    for(int i=0; i< nums.size(); i++){
        if(c==0) break;
        if(visit[nums[i]]) continue;
        visit[nums[i]]=true;
        c--;
    }
    answer = cc - c;
    return answer;
}
