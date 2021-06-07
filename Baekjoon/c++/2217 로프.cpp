/*
백준 2217 로프
최대 들어올릴 수 있는 무게를 찾는 것.
모든 로프를 다 사용하지 않아도 됨.
로프가 들어올릴 수 있는 최대 무게는 사용하는 로프 중 가장 약한 로프가 들어올릴 수 있는 중량.
로프가 들어올리 수 있는 중량을 벡터에 넣고 sort
가장 약한 로프부터 하나씩 빼가며 최대 중량을 측정 및 초기화
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int small=0;
    vector<int> v;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]*(v.size()-i) > small) {
            small=v[i]*(v.size()-i);
        }
    }
    cout << small;
    return 0;
}
