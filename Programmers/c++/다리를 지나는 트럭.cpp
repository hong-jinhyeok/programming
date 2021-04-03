/*
프로그래머스 다리를 지나는 트럭
queue 자료형을 사용하지 않고 vector를 선언하여 사용
역할은 queue처럼 쓰지만 queue와 달리 중간의 값에 임의로 접금할 수 있기 때문
인덱스를 표현하는 변수를 선언하여 조건마다 하나씩 증가하며 front가 누구인지 알려주는 방식
무게에 따라 다리를 건너고 있는 트럭은 true를 나타내고 true인 애들은 거리를 1씩 감소시킴
모든 트럭이 pass하면 반복문 종료
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