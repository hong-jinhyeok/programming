/*
내적
반복문을 통해 내적공식을 적용
*/
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for(int i=0; i<a.size(); i++){
        answer+=(a[i]*b[i]);
    }
    return answer;
}
