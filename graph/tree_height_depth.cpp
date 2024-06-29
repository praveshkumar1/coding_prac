#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
vector<int> graph[N];
int height[N];
int depth[N];

void dfs(int vertex,int par){

    for(auto child : graph[vertex]){
        if(par!=child){
            depth[child]=depth[vertex]+1;
            dfs(child,vertex);
            height[vertex]=max(height[vertex],height[child]+1);
        }
    }
    
}  
int main(){
    int v;
    cin>>v;
    for(int i=0;i<v-1;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    } 
    
    dfs(1,0);
   
    for(int i=1;i<=v;i++){
        cout<<depth[i]<<" "<<height[i]<<endl;
    }

    
}