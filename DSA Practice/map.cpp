#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
  // cout<<m.size()<<endl;
  for(auto &pr: m){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  
}

int main(){
// map<int,string> m;
// m[1]="abc";
// m[2]="cde";
// m.insert({3,"efg"});

// cout<<m.size()<<endl;
// m.erase(2);
// print(m);
//in built functions of map:


// auto it=m.find(1);
// cout<<(*it).first<<(*it).second;
//erasing the value

//printing unique strings with their frequencies in exograpical order :
map <int,int> mp;
for(int i=0;i<5;i++){
  int n;
  cin>>n;
  mp[n]=mp[n]+1;
}
for(auto it:mp){
  cout<<it.first<<" "<<it.second<<endl;
}

  return 0;
}
// map stores only unique values that is if another element is mapped with that element it  forgets the earlier one and reduces the map size.(good implementation).

   