#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
string s;
cin>>s;

int count=0;
int prev;
int valcount=0;
for(int i=0;i<n;i++){
  prev=count;
if(s[i]=='D'){
  count--;
}else{
  count++;
}
// cout<<count<<endl;
// cout<<prev<<endl;
if(count==0 && prev<0){
valcount++;
}
}
cout<<valcount;

}


int main(){
  // int t;
  // cin>>t;
  // while (t--)
  // {
  //   solve();
  // }
  solve();
}