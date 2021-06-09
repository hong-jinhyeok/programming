/*
백준 1789 수들의 합
1부터 차례로 더하면 숫자의 수를 카운트
-> 1이 가장 작은 자연수기 때문에 1부터 카운트
해당번째 숫자를 더했을 때 숫자가 넘으면 반복문 종료
카운트 된 수 출력
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long answer=0;
    long long a;
    long long c=0;
    cin >> a;
    for(long long i=1; ; i++){
        if(answer+i>a) break;
        answer+=i;
        c++;
    }
    cout << c;
    return 0;
}
