#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
vector<int> graph[N];
int subtree[N];
void dfs(int vertex,int par){

    for(auto child : graph[vertex]){
        if(par!=child){
       
            dfs(child,vertex);
         subtree[vertex]=subtree[vertex]+subtree[child];  
        }
    }
    
}  

int main(){
       int v;
    cin>>v;
    for(int i=1;i<=v;i++){
        subtree[i]=i;
    }
    for(int i=0;i<v-1;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    } 
    dfs(1,0);           
    for(int i=1;i<=v;i++){
        cout<<subtree[i]<<" ";
    }
}