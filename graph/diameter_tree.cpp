#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N];
void dfs(int v,int par=0){
    for(auto child:g[v]){
        if(child==par) continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    int max_depth=-1;
    int max_depth_node;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            max_depth_node=i;
        }
    }
    int first_diam=max_depth;
    for(int i=1;i<=n;i++){
        depth[i]=0;
    }
    dfs(max_depth_node);
    max_depth=0;
    for(int i=1;i<=n;i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            max_depth_node=i;
        }
    }
    int second_diam=max_depth;
    cout<<second_diam<<endl;
   
  
}