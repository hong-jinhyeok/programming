/*
���α׷��ӽ� �ִ񰪰� �ּڰ�
���ڿ��� ������ �ϳ��� ������ ���°� �Ǿ��ٸ�
������ ����ȯ�Ͽ� vector�� ����
������ ���� vector�� sort
answer���� �ٽ� ���ڿ��� �ٲپ� vector�� ó�� ���� �� ���� ����
*/
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = "";
	string ss = "";
	vector<int> v;
	for (int i = 0; i<s.length(); i++) {
		if (s[i] == ' ') {
			v.push_back(stoi(ss));
			ss = "";
		}
		else {
			ss.push_back(s[i]);
		}
	}
	v.push_back(stoi(ss));
	sort(v.begin(), v.end());
	answer = to_string(v[0]) + " " + to_string(v[v.size() - 1]);
	return answer;
}