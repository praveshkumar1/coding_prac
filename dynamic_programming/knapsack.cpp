#include<bits/stdc++.h>
using namespace std;
int t[4][4];

int solve(int val[],int we[],int t_we,int n){
    if(n== 0 || t_we == 0){
        return 0;
    }
    if(t[n][t_we]!=1){
        return t[n][t_we];
    }
    if(we[n-1]<=t_we){
        return t[n][t_we]=max(val[n-1]+ solve(val,we,t_we-we[n-1],n-1) , solve(val,we,t_we,n-1));
    }
    else{
        return t[n][t_we]=solve(val,we,t_we,n-1);
    }
}
int main(){
    memset(t,-1,sizeof(t));
    int val[]={1,2,3};
    int weight[]={4,5,1};
    int t_weight;
    cin>>t_weight;
    int n= sizeof(weight)/sizeof(weight[0]);
    cout<<solve(val,weight,t_weight,n);
}