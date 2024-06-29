#include<bits/stdc++.h>
using namespace std;
const int N =2e5+10;
int w[105],v[105];
long dp[N][105];
long solve(int i,int W){
    if(W==0 || i<0){
        return 0;
    }
    if(dp[W][i]!=-1) return dp[W][i];
        long cost =INT_MIN;
    if(w[i]>W){
        cost =max(cost ,solve(i-1,W));
    }else{
        cost = max(cost , solve(i-1,W-w[i])+v[i]);
    cost =max(cost ,solve(i-1,W));
    }
     
    return dp[W][i]=cost ;
}
int main(){
    memset(dp,-1,sizeof(dp));
  int n;
  cin>>n;
  int W;
  cin>>W;
    for(int i=0;i<n;i++){
        cin>>w[i];
        cin>>v[i];
    }
 cout<<solve(n-1,W); 
}