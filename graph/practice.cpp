#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
vector<int>graph[N];
int vis[N];
 
void bfs(int v){
   queue<int>q;
    q.push(v);
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
       
        for(auto it : graph[x]){
            if(!vis[it])
            {
                vis[it]=true;
                q.push(it);
            }
            
        }
    }
}
void dfs(int v){
    vis[v]=true;
    for(auto child: graph[v]){
        
        cout<<child<<endl;
        if(vis[child]){
            continue;
        }else{
            dfs(child);
        }
       
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
}