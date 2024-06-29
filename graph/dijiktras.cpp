//dijiktra algorithm    
#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
const int INF=1e+9;
vector<pair<int,int>>g[N];
int dis[N];
void algo(pair<int,int> ver){
    priority_queue<pair<int,int>>pq;
    pq.push(ver);
    while(!pq.empty()){
      int dist=pq.top().first;
      int node=pq.top().second;
      pq.pop();

        for(auto child: g[node]){
          int edgeweight=child.first;
          
      if(dist+edgeweight<dis[child.second]){
        dis[child.second]=dist+edgeweight;
        pq.push({dist+edgeweight,child.second});
      }   
    }
    }   
}
int main(){
  
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    dis[i]=INF;
      }
      dis[0]=0;
     
  for(int i=0;i<m;i++){
    int x,y;
    int w;
    cin>>x>>y>>w;
    g[x].push_back({w,y});
    g[y].push_back({w,x});
  }
algo({0,0});
  for(int i=0;i<n;i++){
    cout<<dis[i]<<" ";
  }
    return 0;
}