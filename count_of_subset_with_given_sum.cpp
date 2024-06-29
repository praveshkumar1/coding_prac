#include<bits/stdc++.h>
using namespace std;
int arr[10005];
vector<int>v;
int solve(int i,int target){
   if(target==0){
       
        return 1;
    }
    if(i<0){
        return 0;
    }
    
    if(arr[i]>target){
        return solve(i-1,target);
        
    }else{
        //cout<<"called on "<<i<<"and the number was"<<arr[i]<<"and at that time target was"<<target<<endl;
        return (solve(i-1,target) + solve(i-1,target-arr[i]));
    }
    
}

int main(){
  int n ;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
 cout<< solve( n-1, target);
 cout<<endl;
 //cout<<countSubsetsWithGivenSum(arr,n,target);
//  for(auto i:v){
//     cout<<i<<" ";
//  }
}