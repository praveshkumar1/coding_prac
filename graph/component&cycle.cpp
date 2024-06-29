#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int> graph[N];
bool vis[N];
vector<int>c_cc;
void dfs(int vertex){
   c_cc.push_back(vertex);
    vis[vertex]=true;
    
    for(int child : graph[vertex]){
        if(!vis[child]){
           
            dfs(child);
        }
    }
}
bool dfs_cycle(int vertex,int parent){
    vis[vertex]=true;
    bool isLoopExist=false;
    for(auto child : graph[vertex]){
        if(child!=parent && vis[child]){
            return true;
        }
        isLoopExist |= dfs_cycle(child,vertex);
    }
    return isLoopExist;
}
int main(){
    vector<vector<int>>cc;
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==false){
            ct++;
          c_cc.clear();
            dfs(i);
            cc.push_back(c_cc);
            cout<<endl;
        }
    }
    for(auto c_cc : cc){
        for(auto it: c_cc){
            cout<<it;
        }
        cout<<endl;
    }
    cout<<ct<<endl;
    bool isLoopExist=false;
    for(int i=1;i<=n;i++){
        if(dfs_cycle(i,0)){
            isLoopExist=true;
            break;
        }
    }
    cout<<"loop answer: "<<isLoopExist<<" ";
}


//dfs mein kya hota is go to child if not visited than go it's sub childeren.