/*
백준 1916 최소비용 구하기
우선순위 큐를 이용한 다익스트라 알고리즘을 사용.
우선순위 큐는 (최소비용, 도시)를 원소로 가짐.
처음 도시에서 모든 도시로의 비용을 큐에 입력.
가장 작은 비용의 도시부터 pop.
최소비용을 최신화.
현재 도시부터 각 도시까지의 최소비용 + 현재 도시까지 사용된 비용과 현재 입력된 각 도시에 가는 비용을 비교.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int city;
	int bus;
	int cost[1001][1001]={0,};
	int start,end;
	cin >> city;
	cin >> bus;
	for(int i=0; i<1001; i++){
		for(int j=0; j<1001; j++){
			if(i==j) cost[i][j]=0;
			else cost[i][j]=999999999;
		}
	}
	for(int i=0; i<bus; i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(cost[a][b] > c)cost[a][b]=c;
	}
	cin >> start >> end;
	/////////////////////////////////////////////////
	vector<int> dist;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

	for(int i=0; i<=city; i++){
		dist.push_back(cost[start][i]);
		if(i!=start){
			pq.push(make_pair(dist[i],i));
		}
	}

	while(!pq.empty()){
		int current_city=pq.top().second;
		int min_cost=pq.top().first;
		pq.pop();
		for(int i=1; i<=city; i++){
			if(current_city==i) continue;
			if(cost[current_city][i] + min_cost < dist[i]){
				dist[i] = cost[current_city][i] + min_cost;
				pq.push(make_pair(dist[i],i));
			}
		}
	} 
	cout << dist[end];
}
