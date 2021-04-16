/*
프로그래머스 행렬의 덧셈
이중반복문을 통해 같은 위치의 행렬값을 더함
*/
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size(); i++){
        vector<int> v;
        for(int j=0; j<arr1[0].size(); j++){
            v.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(v);
    }
    return answer;
}
