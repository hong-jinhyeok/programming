/*
백준 2738 행렬 덧셈
최대 길이100 100 짜리 2차원 배열선언
한번은 값을 입력받고 한번은 원래 있던 값에 더함
*/
#include <iostream>

using namespace std;

int arr[101][101]={0,};

int main(){
    int n,m;
    cin >> n  >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>> a;
            arr[i][j]=a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>> a;
            arr[i][j]+=a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
