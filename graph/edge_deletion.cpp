#include<bits/stdc++.h>
using namespace std;
const int N=1e+6;
vector<int>g[N];
int val[N];
int sum_subtree[N];
void dfs(int vertex,int par){
    sum_subtree[vertex]=val[vertex];
    for(auto child : g[vertex]){
        if(child==par) continue;
        dfs(vertex,vertex);
        sum_subtree[vertex]=sum_subtree[vertex]+sum_subtree[child];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0);
    int one_sum=sum_subtree[1];
    int maxi=-1;
    for(int i=2;i<=n;i++){
        int a=sum_subtree[i];
        maxi=max(maxi,(one_sum-a)*a);
    }
    cout<<maxi<<endl; 
}
