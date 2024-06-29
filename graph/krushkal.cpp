#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int size[N];
void make(int v){
    parent[v]=v;
    size[v]=1;
}
int find(int v){
    if(parent[v]==v){
        return v;
    }else{
        return parent[v]=find(parent[v]);
    }
}
void Union(int a ,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(size[a]<size[b]){
            swap(a,b);
        }
        parent[b]=a;
        size[b]+=size[a];
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>>edges;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    for(int i=1;i<=n;i++){
        make(i);
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto it: edges){
        int weight=it.first;
        int u=it.second.first;
        int v=it.second.second;
        if(find(u)==find(v)) continue;
        Union(u,v);
        cost+=weight;
        cout<<"u:"<< u<<"v:"<<v<<endl;
    }
    cout<<cost<<endl;

}