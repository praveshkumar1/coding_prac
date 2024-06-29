#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
  int ar[N];
bool solve(int i,int sum){
    if(sum==0){
        return true;
    }
    if(i==0){
        return false ;
    }
    if(ar[i]>sum){
       return  solve(i-1,sum);
    }
     return (solve(i-1,sum-ar[i]) || solve(i-1,sum));
    
}
int main(){
int n;
cin>>n;
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  int sum ;
  cin>>sum;
 cout<<solve(n-1,sum); 
}