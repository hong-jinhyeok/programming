/*
���α׷��ӽ� ������
queue 2���� priority_queue 1���� ����Ͽ� �ذ�
queue���� ���� �켱 ������ ��ġ�� ����
priority_queue���� �켱 ������ ����
�ݺ����� ���� ������ ������ ����� ��
*/
#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<int> q1, q2;
	priority_queue<int, vector<int>, less<int>> pq;
	for (int i = 0; i<priorities.size(); i++) {
		q1.push(priorities[i]);
		q2.push(i);
		pq.push(priorities[i]);
	}
	while (1) {
		if (q1.front() == pq.top() && q2.front() == location) break; // ã�� ����
		else if (q1.front() == pq.top()) { // ���� ���������� ����
			pq.pop();
			q1.pop();
			q2.pop();
			answer++;
		}
		else { // ���������� ���ϴ� ����
			q1.push(q1.front());
			q1.pop();
			q2.push(q2.front());
			q2.pop();
		}
	}
	return answer + 1;
}