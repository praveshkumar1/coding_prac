//so this is another variation of knapsack in which if we reject a choice then it is processsed , but if we don't reject a choice then we have a option 
//to consider it again but whereas in knapsack we make a choice only once that is either we take it once or don't take it 
//so let us do it's first question of the type that is rod cutting example 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<pair<float,int>>vp;
    for(int i=0;i<n;i++){
        float x= (arr[i] / i+1 );
        vp.push_back({x,i+1});
    }
    sort(vp.begin(),vp.end());
    reverse(vp.begin(),vp.end());
    int i=0;
    int cost =0;
    int len=n;
    while(true){
        if(i==n){
            break ;
        }
        if(len==0){
            break;
        }
        if(vp[i].second <= len){
            len-= vp[i].second;
            cost+=arr[vp[i].second-1];
        }
        if(vp[i].second > len){
                 i++;
        }
    }
    cout<<cost<<endl;

}