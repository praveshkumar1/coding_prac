#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   if(v[0] != n){
    cout<<"NO"<<endl;
    return;
   }
   v.push_back(0);
   vector<int>ans;
   for(int i=0;i<n;i++){
    for(int j=0;j<(v[i]-v[i+1]);j++){
        ans.push_back(i+1);
    }
   }
  
   reverse(ans.begin(),ans.end());
 v.pop_back();
   if(v==ans){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}