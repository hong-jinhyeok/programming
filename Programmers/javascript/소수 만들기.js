/*
프로그래머스 소수 만들기
에라스토테네스의 체를 사용하여 3000까지의 수 중 소수를 모두 판별.
완전탐색을 사용하여 50개 중 3개를 선택-> 더한 값으로 소수판별 후 count
*/
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int count=0;
bool number[3001] = { 0, };

void dfs(int idx, vector<int> v, vector<int>& nums){
    if(v.size()==3){
        int sum=v[0]+v[1]+v[2];
        if(number[sum] ) {
            //cout << v[0] << " " << v[1] << " " << v[2] << " " << sum << "\n";
            count++;
        }
        return;
    }
    for(int i=idx; i<nums.size(); i++){
        v.push_back(nums[i]);
        dfs(i+1, v, nums);
        v.pop_back();
    }
    return;
}

int solution(vector<int> nums) {
    int answer = -1;

	for (int i = 0; i <= 3000; i++) number[i] = 1;
	for (int i = 2; i <= sqrt(3000); i++) {
		if (number[i] == 0) continue;
		for (int j = i * i; j <= 3000; j += i) {
			number[j] = 0;
		}
	}

    vector<int> v;
    dfs(0,v,nums);
    
    answer=count;
    return answer;
}
