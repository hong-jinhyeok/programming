/*
프로그래머스 모의고사
각각의 패턴을 저장한 배열을 선언.
문제를 확인할 때 문제를 패턴의 길이로 나눈 나머지를 패턴의 index로 하여 확인.
문제를 최대로 맞춘 패턴을 answer에 삽입.
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr1[5]={1,2,3,4,5};
    int arr2[8]={2,1,2,3,2,4,2,5};
    int arr3[10]={3,3,1,1,2,2,4,4,5,5};
    int maxnum=0, a1=0,a2=0,a3=0;
    for(int i=0; i<answers.size(); i++){
        if(answers[i]==arr1[i%5]) a1++;
        if(answers[i]==arr2[i%8]) a2++;
        if(answers[i]==arr3[i%10]) a3++;
    }
    if(a1>maxnum) maxnum=a1;
    if(a2>maxnum) maxnum=a2;
    if(a3>maxnum) maxnum=a3;
    if(maxnum==a1) answer.push_back(1);
    if(maxnum==a2) answer.push_back(2);
    if(maxnum==a3) answer.push_back(3);
    return answer;
}
