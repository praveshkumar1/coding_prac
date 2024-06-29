//ye prefix sum calculation through recursion hai 
#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int>v,vector<int>&ans){
    if(v.size()==1){
ans.push_back(v[v.size()-1]);
        return v[v.size()-1];
    }
    int temp=v[v.size()-1];
    v.pop_back();
    int pushed=subarraysum(v,ans)+temp;
    ans.push_back(pushed);
   return pushed;
}
int main(){
  vector<int>vec;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vec.push_back(x);
  }
  vector<int>ans;
    subarraysum(vec,ans);
    int maxi=INT_MIN;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        if(maxi<=ans[i]){
            maxi=ans[i];
        }
    }
    cout<<endl;
    cout<<maxi;
}