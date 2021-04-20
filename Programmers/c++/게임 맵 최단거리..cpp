/*
프로그래머스 게임 맵 최단거리
최단거리->BFS활용
지나온 queue들어간 곳은 다시 안지나가도록 maps의 값을 0으로 바꾸며 진행
*/
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

queue<pair<pair<int,int>,int>> q;
int h,w;
int BFS(vector<vector<int> >& maps){
    h=maps.size();
    w=maps[0].size();
    q.push(make_pair(make_pair(1,1),0));
    
    while(!q.empty()){
        int x=q.front().first.first;
        int y=q.front().first.second;
        int count=q.front().second;
        q.pop();
        count++;
        if(x==w && y==h){
            return count;
        }
        if(x<w && maps[y-1][x]==1){
            q.push(make_pair(make_pair(x+1,y),count));
            maps[y-1][x]==0;
        }
        if(1<x && maps[y-1][x-2]==1){
            q.push(make_pair(make_pair(x-1,y),count));
            maps[y-1][x-2]=0;
        }
        if(y<h && maps[y][x-1]==1){
            q.push(make_pair(make_pair(x,y+1),count));
            maps[y][x-1]=0;
        }
        if(1<y && maps[y-2][x-1]==1){
            q.push(make_pair(make_pair(x,y-1),count));
            maps[y-2][x-1]=0;
        }
    }
    return  -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = BFS(maps);
    return answer;
}
