#include<bits/stdc++.h>
using namespace std;
const int N=1e+5;
int dp[N];
int solve(vector<int>&v,int i,int k){
    if(i==0){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int cost =INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            cost = min(cost ,solve(v,(i-j),k)+abs(v[i]-v[i-j]));
        }
        
    }
    return dp[i]=cost ;
}
int main(){
    memset(dp,-1,sizeof(dp));
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<solve(v,n-1,k);
}