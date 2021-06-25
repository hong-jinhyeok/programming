/*
백준 8393 합
반복문을 통해 덧셈 진행.
*/
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++) sum+=i;
    cout << sum;
    return 0;
}
