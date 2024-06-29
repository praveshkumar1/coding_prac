#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];//for adjacency matrix
vector<int> graph2[N];//for adjacency list
vector<pair<int,int>>graph3[N];//for adjacency list with weights
bool vis[N];
void dfs(int vertex){
    //take any action on the vertex after entering the vertex
    cout << vertex<<endl;
vis[vertex]=true;
    for(int child: graph2[vertex]){
        cout<<"parent"<<vertex<<"child"<<child<<endl;
        if(vis[child]) continue;
        //take action on the child before entering the child
           dfs(child);
           // take action on the child after exiting the child
    }
    //take action on the vertex before exiting the code
}

int main(){
    //in first line it is vertex and edges which are given
    // below that it is edges cofiguration
    //adjacency matrix
    int n,m;
  cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
       // graph[v1][v2]=1; only for adjacency matrix
        // graph[v2][v1]=1; only for adjacency matrix

        // for adjacency list
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
    dfs(1);
}