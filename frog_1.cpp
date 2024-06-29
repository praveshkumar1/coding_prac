#include<bits/stdc++.h>
using namespace std;
const int N=1e+5;
int dp[N];
int sol(vector<int>&v,int i){
    if(i==0){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int cost =INT_MAX;
     cost= min(cost,sol(v,i-1)+abs(v[i-1]-v[i]));
     if(i>1)
    cost= min(cost,sol(v,i-2)+abs(v[i-2]-v[i]));
    return dp[i]=cost;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<sol(v,n-1);
}
int main(){
    memset(dp,-1,sizeof(dp));
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}