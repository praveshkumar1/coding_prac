#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long a,b;
    cin>>a>>b;
    vector<long long>ar(a);
    for(int i=0;i<a;i++){
        cin>>ar[i];
        ar[i]=ar[i]+i+1;
    }
    sort(ar.begin(),ar.end());
    int i=0;
    int cnt=0;
    while(b>=ar[i] && i<a){
        b-=ar[i];
        //cout<<b<<endl;
        cnt++;
        i++;
    }
    cout<<cnt<<endl;

}
int main(){
   int t;
   cin>>t;
   while(t--){
  solve();
   }
 
}
