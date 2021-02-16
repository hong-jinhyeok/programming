/*
���α׷��ӽ� �ٸ��� ������ Ʈ��
queue �ڷ����� ������� �ʰ� vector�� �����Ͽ� ���
������ queueó�� ������ queue�� �޸� �߰��� ���� ���Ƿ� ������ �� �ֱ� ����
�ε����� ǥ���ϴ� ������ �����Ͽ� ���Ǹ��� �ϳ��� �����ϸ� front�� �������� �˷��ִ� ���
���Կ� ���� �ٸ��� �ǳʰ� �ִ� Ʈ���� true�� ��Ÿ���� true�� �ֵ��� �Ÿ��� 1�� ���ҽ�Ŵ
��� Ʈ���� pass�ϸ� �ݺ��� ����
*/
#include <string>
#include <vector>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 1;
	vector<int> dist(truck_weights.size(), bridge_length);
	int sum = 0;
	int truck = 0, pass = 0;
	bool on_bridge[10000] = { false, };
	while (pass != truck_weights.size()) {
		if (truck != truck_weights.size() && sum + truck_weights[truck] <= weight) {
			on_bridge[truck] = true;
			sum += truck_weights[truck];
			truck++;
		}
		for (int i = 0; i < truck; i++) {
			if (on_bridge[i] == true) {
				dist[i]--;
				if (dist[i] == 0) {
					on_bridge[i] = false;
					sum -= truck_weights[i];
					pass++;
				}
			}
		}
		answer++;
	}
	return answer;
}