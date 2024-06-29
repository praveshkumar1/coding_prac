#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int par[N];
void dfs(int v,int p=-1){
    par[v]=p;
    for(auto child:g[v]){
        if(child==p) continue; 
        dfs(child,v);
    } 

}
vector<int> path(int v){
    vector<int>ans;
    while(v!=-1){
        ans.push_back(v);
        v= par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
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
   
   int lca=-1;                                                                                
  vector<int>path_x= path(9);
  vector<int>path_y= path(11);
    for(int i=0;i<min(path_x.size(),path_y.size());i++){
        if(path_x[i]==path_y[i]){
            lca=path_x[i];
        }else{
            break;
        }
    }
    cout<<lca;

}