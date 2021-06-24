/*
백준 9085 더하기
간단한 반복문을 통하여 덧셈을 진행
*/
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int sum=0;
        int a;
        cin >> a;
        for(int j=0; j<a; j++){
            int b;
            cin >> b;
            sum+=b;
        }
        cout << sum << "\n";
    }
    return 0;
}
