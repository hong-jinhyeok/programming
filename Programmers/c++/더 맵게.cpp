/*
���α׷��ӽ� �� �ʰ�
�켱���� ť�� ����Ͽ� �ذ�.
���� ���̽�
1. ť�� ���� ��
2. ť�� ���Ұ� �ϳ��� ����� ��
3. ť�� ���Ұ� �ϳ��� ���Ƽ� ������ �� ���� ��
�̷����� ���̽��� ����Ѵٸ� ���.
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