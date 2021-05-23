/*
백준 1202 보석 도둑
priority queue와 multiset 사용.
보석의 가격을 1순위 가격이 같다면 무게가 무거운게 2순위의 형태로 priority queue에 삽입
-> pair<가격,무게>로 priority queue에 삽입
 multiset에 가방의 무게 삽입.
 priority queue의 top부터 multiset의 lower_bound 값으로 찾음 
 -> iter가 end()가 아니라면 가격을 answer에 + 후 multiset에서 erase.

*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); 
	cout.tie(NULL);

	int n, k;
	long long answer = 0,maxbm=0;
	priority_queue<pair<int,int>, vector<pair<int, int>>, less<pair<int, int>>> jewelry;
	multiset<int> bag;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int m, v;
		cin >> m >> v;
		jewelry.push(make_pair(v, m));
	}
	for (int i = 0; i < k; i++) {
		int b;
		cin >> b;
		bag.insert(b);
	}

	while (!jewelry.empty() && !bag.empty()) {
		stack<int> s;
		int m = jewelry.top().second;
		int v = jewelry.top().first;
		jewelry.pop();
		multiset<int>::iterator bm;
		bm = bag.lower_bound(m);
		if (bm != bag.end()) {
			answer += (long long)v;
			bag.erase(bm);
		}
	}
	cout << answer;
	return 0;
}