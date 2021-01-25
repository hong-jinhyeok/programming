/*
프로그래머스 크레인 인형뽑기 게임
2차원 vector값으로 인형의 위치와 종류가 주어지고 1차원 vector로 뽑는 순서가 주어짐.
뽑은 인형이 target이 되고 
뽑힌 인형은 배열에 입력되고 현제 가장 최근에 뽑힌 인형의 위치는 loc가 됨.
target과 s[loc-1]즉 가장 최근에 뽑힌 인형의 고유 값이 같다면 loc는 -1이 되고
answer은 +2가 됨.
*/
#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	int s[1000] = { 0, };
	int loc = 0;
	int target = 0;

	for (int i = 0; i<moves.size(); i++) {
		for (int j = 0; j<board.size(); j++) {
			if (board[j][moves[i] - 1] != 0) {
				target = board[j][moves[i] - 1];
				board[j][moves[i] - 1] = 0;
				break;
			}
		}
		if (target != 0 && target == s[loc - 1]) {
			loc--;
			target = 0;
			answer += 2;
		}
		else {
			s[loc++] = target;
			target = 0;
		}
	}
	return answer;
}