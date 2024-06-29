#include<bits/stdc++.h>
using namespace std;
int arr[1004];
int solve(int i,int target){
    if(i==-1 && target==0 ){
        return 1;
    }
    if(i==-1){
        return 0;
    }
    return (solve(i-1,target-arr[i])+solve(i-1,target+arr[i]));

}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
 cout<<solve(n-1,target); 
}