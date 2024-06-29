 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
int n;
cin>>n;
map<char,int>m;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
 
 m[s[i]]=m[s[i]]+1;
}

vector<pair<int,int>>v;
for(auto it:m){
 v.push_back({it.first,it.second});
}
if(v.size()==1){
  if(v[0].first=='Q'){
    cout<<"No"<<endl;
    return ;
  }else{
    cout<<"Yes"<<endl;
    return;
  }
}
if(v[0].second>=v[1].second){
  cout<<"Yes"<<endl;
}else{
  cout<<"No"<<endl;
}




 }
int main(){
  int t;
 cin>>t;
  while (t--)
  {
    solve();
  }
  //solve();

 
}

