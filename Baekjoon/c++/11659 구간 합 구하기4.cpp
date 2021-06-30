/*
백준 11659 구간 합 구하기4
DP 이용
i번째 값에 해당 index까지 모두 더한 합을 초기화하는 벡터를 설정.
0번째는 0을 미리 초기화해주어야함.
a~b까지 합=>v[b]-v[a-1]
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(0);
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        v[i]+=v[i-1];
    }
    for(int i=0; i<m; i++){
        int a,b;
        int sum=0;
        cin >> a >> b;
        sum=v[b]-v[a-1];
        cout << sum << "\n";
    }
    return 0;
}
