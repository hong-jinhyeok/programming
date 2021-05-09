/*
프로그래머스 로또의 최고 순위와 최저 순위
맞친 숫자를 인덱스로 하여 순위의 값을 가진 배열 rate
로또번호와 당첨번호를 내림차순으로 정렬
두 수를 끝에서부터 비교하며 pop
0의 개수와 맞춘 숫자의 개수를 따로 count
최고와 최저를 판별
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int rate[7]={6,6,5,4,3,2,1};
    int zero=0;
    int same_num=0;
    sort(lottos.begin(), lottos.end(),greater<>());
    sort(win_nums.begin(), win_nums.end(),greater<>());
    while(lottos.size()>0 && win_nums.size()>0){
        //cout << lottos[lottos.size()-1] << endl;
        if(lottos[lottos.size()-1]==0){
            zero++;
            lottos.pop_back();
        } else if(lottos[lottos.size()-1]==win_nums[win_nums.size()-1]){
            lottos.pop_back();
            win_nums.pop_back();
            same_num++;
        } 
        else if(lottos[lottos.size()-1] > win_nums[win_nums.size()-1]) win_nums.pop_back();
        else lottos.pop_back();
    }
    //cout << same_num << zero;
    answer.push_back(rate[same_num+zero]);
    answer.push_back(rate[same_num]);
    return answer;
}
