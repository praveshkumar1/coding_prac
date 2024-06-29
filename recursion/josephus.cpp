#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int k,int ind,int n){
    if(v.size()==1){
        cout<<v[0]<<" ";
        return v[0];
    }
     ind=((ind+k)%v.size());
    v.erase(v.begin()+ind);
    solve(v,k,ind,n);
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    k--;
    int ind=0;
    cout<<solve(v,k,ind,n);
}