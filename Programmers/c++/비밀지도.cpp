/*
프로그래머스 비밀지도
각 배열의 동일한 index의 수를 2진수로 바꾸어 
각 자리를 더했을 때 1이상이면 #을 아니면 공백을 문자열에 추가함
*/
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    bool map1[16][16];
    bool map2[16][16];
    bool map3[16][16];
    int len=arr1.size();
    
    for(int i=0; i<len; i++){
        for(int j=len-1; j>=0; j--){
            map1[i][j]=arr1[i]%2;
            map2[i][j]=arr2[i]%2;
            arr1[i]/=2; arr2[i]/=2;
            map3[i][j]=map1[i][j]|map2[i][j];
        }
    }
    for(int i=0; i<len; i++){
        string s="";
        for(int j=0; j<len; j++){
            if(map3[i][j]==1) s.push_back('#');
            else s.push_back(' ');
                
        }
        answer.push_back(s);
    }
    return answer;
}
