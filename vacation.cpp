//dp vale ko one d rakhne se kafi sahi hai aa rahe hai , sab nahi 

#include<bits/stdc++.h>
using namespace std;
const int N=1e+5;
 int a[N],b[N],c[N];
 int dp[100009][100009];
int solve(int i , int prev){
    if(i==0){
        return 0;
    }
    if(dp[i][prev]!=-1) return dp[i][prev];
    if(prev==0){
        return dp[i][prev]=max(solve(i-1,1)+a[i],solve(i-1,2)+b[i]);
    }
    if(prev==1){
        return dp[i][prev]=max(solve(i-1,0)+b[i],solve(i-1,2)+b[i]);
    }
        return dp[i][prev]=max(solve(i-1,0)+c[i],solve(i-1,1)+c[i]);
}
int main(){
    memset(dp,-1,sizeof(dp));
int n ;
  cin>>n;
 
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    cin>>b[i];
    cin>>c[i];
  }
  int prev_pass;
 if(a[n]>=b[n] && a[n]>=c[n]) prev_pass=0;
 if(b[n]>=c[n] && b[n]>=a[n]) prev_pass=1;
 if(c[n]>=a[n] && c[n]>=b[n]) prev_pass=2;
 cout<<solve(n,prev_pass); 
}