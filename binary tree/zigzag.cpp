#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>G[n+1];
    map<pair<int,int>, int>dist;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        G[a].pb(b);
        // dist[{a,b}] = (dist[{a,b}]?c:min(dist[{a,b}],c));
        if(dist[{a,b}]) dist[{a,b}] = min(dist[{a,b}],c);
        else dist[{a,b}] = c;

    }
    vector<int>d(n);
    for(int i=1;i<=n;i++){
        d[i] = INT_MAX;
    }
    d[1] = 0;
    for(auto pr:dist) cout<<pr.second<<" "; cout<<endl;
    map<int,bool>visited;
    priority_queue<pair<int,int>>pq;
    pq.push({0,1});
    while(pq.size()){
        int node = pq.top().second;
        int distance_so_far = -pq.top().first;
        pq.pop();
        if(visited[node] == true) {
            continue;
        }
        for(int i=0;i<G[node].size();i++){
            if(d[G[node][i]]>d[node]+dist[{node, G[node][i]}]){
                d[G[node][i]] = d[node]+dist[{node, G[node][i]}];
                pq.push({-d[G[node][i]], G[node][i]});
            }
        }
        visited[node] = true;
        cout<<node<<" ";
        for(int i=1;i<=n;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}