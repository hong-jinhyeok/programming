/*
백준 2559 수열
투포인터를 사용하여 해결
처음 구간의 합을 구하고 
다음 구간은 처음과 끝의 인덱스를 하나씩 증가시키고
처음 구간의 합에서 처음 값을 빼도 새로 늘어난 범위의 값을 추가하는 투포인터 사용.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    vector<int> v;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int start=0,end=k-1;
    int sum=0;
    for(int i=start; i<=end; i++){
        sum+=v[i];
    }
    int mSum=sum;
    for(int i=1; i<n-k+1; i++){
        sum-=v[i-1];
        sum+=v[end+1];
        end++;
        if(mSum<sum) mSum=sum;
    }
    cout << mSum;
    return 0;
}
