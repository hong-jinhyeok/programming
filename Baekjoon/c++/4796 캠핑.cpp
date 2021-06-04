/*
백준 4796 캠핑
단위 일수당 머무를 수 있는 일들이 며칠인지 먼저 구함
단위 일수보다 방학이 짧게 남았다면 머무를 수 있는 날과 남아있는 방학 중
더 작은 값을 더함.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int idx=1;
    while(1){
        int l,p,v;
        int answer=0;
        cin >> l >> p >> v;
        if(l==0 && p==0 && v==0) break;
        while(v>=p){
            answer+=l;
            v-=p;
        }
        int n= l>v ? v:l;
        answer+=n;
        cout << "Case " << idx << ": " << answer << "\n";
        idx++;
    }
    return 0;
}
