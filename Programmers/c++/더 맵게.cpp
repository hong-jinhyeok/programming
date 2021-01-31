/*
프로그래머스 더 맵게
우선순위 큐를 사용하여 해결.
주의 케이스
1. 큐가 비였을 때
2. 큐의 원소가 하나로 통과할 때
3. 큐의 원소가 하나만 남아서 진행할 수 없을 때
이렇게의 케이스만 고려한다면 통과.
*/
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	for (int i = 0; i<scoville.size(); i++) {
		pq.push(scoville[i]);
	}
	while (pq.size()>1 && pq.top()<K) {
		long long a = pq.top(); pq.pop();
		long long b = pq.top(); pq.pop();
		pq.push(a + b * 2);
		answer++;
	}
	if (pq.size()<1 || pq.top()<K) return -1;
	return answer;
}