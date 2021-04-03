/*
프로그래머스 프린터
queue 2개와 priority_queue 1개를 사용하여 해결
queue에는 각각 우선 순위와 위치를 삽입
priority_queue에는 우선 순위를 삽입
반복문을 통해 문제의 조건을 만들어 비교
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
		if (q1.front() == pq.top() && q2.front() == location) break; // 찾는 문서
		else if (q1.front() == pq.top()) { // 먼저 빠져나가는 문서
			pq.pop();
			q1.pop();
			q2.pop();
			answer++;
		}
		else { // 빠져나가지 못하는 문서
			q1.push(q1.front());
			q1.pop();
			q2.push(q2.front());
			q2.pop();
		}
	}
	return answer + 1;
}