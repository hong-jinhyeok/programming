/*
���α׷��ӽ� ���� ��ȯ �ݺ��ϱ�
�� �ݺ������� 0�� ������ ���ο� ���ڿ��� ����.
������ ���ڿ��� 2������ ��ȯ->2�� ������ �������� string�� append
->���� string�� reverse
1�� �� ������ ��ȯ
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string num2(int n) {
	string s = "";
	while (n>0) {
		s += to_string(n % 2);
		n /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}
vector<int> solution(string s) {
	vector<int> answer;
	string ss = s;
	int trans = 0;
	int zero = 0;
	while (ss.length()>1) {
		trans++;
		string rs = "";
		for (int i = 0; i<ss.length(); i++) {
			if (ss[i] == '1') rs.push_back('1');
			else {
				zero++;
			}
		}
		int l = rs.length();
		ss = num2(l);
	}
	answer.push_back(trans);
	answer.push_back(zero);
	return answer;
}