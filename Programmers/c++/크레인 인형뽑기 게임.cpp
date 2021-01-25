/*
���α׷��ӽ� ũ���� �����̱� ����
2���� vector������ ������ ��ġ�� ������ �־����� 1���� vector�� �̴� ������ �־���.
���� ������ target�� �ǰ� 
���� ������ �迭�� �Էµǰ� ���� ���� �ֱٿ� ���� ������ ��ġ�� loc�� ��.
target�� s[loc-1]�� ���� �ֱٿ� ���� ������ ���� ���� ���ٸ� loc�� -1�� �ǰ�
answer�� +2�� ��.
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