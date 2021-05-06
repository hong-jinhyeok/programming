/*
백준 1915 가장 큰 정사각형
위,아래,대각선,본인 값이 모두  0이 아닐 때 위,아래,대각선의 값 중 가장 작은 값+1로 본인 값을 초기화
위,아래,대각선,본인 값 중 0이 있다면 본인 값으로 초기화
모든 원소 중 가장 큰 값으로 정사각형의 한변을 결정
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
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

int main() {
   int h, w;
   vector<vector<int>> v;
   cin >> h >> w;
   for (int i = 0; i < h; i++) {
      vector<int> sv;
      string s;
      cin >> s;
      for (int j = 0; j < w; j++) {
         int n = s[j] - '0';
         sv.push_back(n);
      }
      v.push_back(sv);
   }
   for (int i = 1; i < h; i++) {
      for (int j = 1; j < w; j++) {
         v[i][j] = checkValue(v[i - 1][j - 1], v[i - 1][j], v[i][j - 1], v[i][j]);
      }
   }
   for (int i = 0; i < h; i++) {
      sort(v[i].begin(), v[i].end(), greater<int>());
   }
   sort(v.begin(), v.end());
   cout << v[h - 1][0]* v[h - 1][0] << "\n";
   return 0;
}
