#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int solve(int i,int target){
    if(target==0 && i==-1){
        return 1;
    }
    if(i==-1){
        return 0;
    }
    //cout<<"called on index"<<i<<"and the value is "<<arr[i]<<"and at this time target was "<<target<<endl;
    return (solve(i-1,target-arr[i])+solve(i-1,target+arr[i]));
}
int main(){
  int n;
  cin>>n;
  int target ;
  cin>>target ;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<solve(n-1,target);
} 