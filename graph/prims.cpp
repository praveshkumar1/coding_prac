#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
const int INF=1e+9;
vector<pair<int,int>>g[N];
int dis[N];
bool vis[N];
void algo(int a ,int b ){
    priority_queue<pair<int,int>>pq;
    pq.push({0,0});
    
}
int main(){
  
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    dis[i]=INF;
      }
      dis[0]=0;
      for(int i=0;i<n;i++){
        vis[i]=0;
      }
     int min_weight=INT_MAX;
     pair<int,int> min_weight_edge;
  for(int i=0;i<m;i++){
    int x,y;
    int w;
    cin>>x>>y>>w;
    if(w<min_weight){
        min_weight=w;
    min_weight_edge={x,y};
    }
    g[x].push_back({w,y});
    g[y].push_back({w,x});
  }
  algo(min_weight_edge.first,min_weight_edge.second);

}