/*
프로그래머스 가장 큰 정사각형 찾기
위,아래,대각선,본인 값이 모두  0이 아닐 때 위,아래,대각선의 값 중 가장 작은 값+1로 본인 값을 초기화
위,아래,대각선,본인 값 중 0이 있다면 본인 값으로 초기화
모든 원소 중 가장 큰 값으로 정사각형의 한변을 결정
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkValue(int a, int b, int c, int value) {
   int minV,min1;
   if (a != 0 && b != 0 && c != 0 && value != 0) {
      min1 = a > b ? b : a;
      minV = min1 > c ? c : min1;
      return minV+1;
   }
   return value;
}

int solution(vector<vector<int>> board)
{
    int answer = 1234;

    for (int i = 1; i < board.size(); i++) {
      for (int j = 1; j < board[0].size(); j++) {
         board[i][j] = checkValue(board[i - 1][j - 1], board[i - 1][j], board[i][j - 1], board[i][j]);
      }
   }
   for (int i = 0; i < board.size(); i++) {
      sort(board[i].begin(), board[i].end(), greater<int>());
   }
   sort(board.begin(), board.end());
   //cout << board[h - 1][0]* board[h - 1][0] << "\n";
    answer=board[board.size() - 1][0]* board[board.size() - 1][0];
    return answer;
}
