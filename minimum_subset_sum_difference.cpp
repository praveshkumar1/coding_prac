//acha question haai 
//bas ye dilkna hai ki kaise ham isse convert kar sakte hai subset_sum vale problem mein 
//so we know that total_sum/2 ke just pas vala answer hoga 
//so find that sum in this 
//for this find all the sums which are possible then after that find the nearest to total_sum/2 for correct answer 
#include<bits/stdc++.h>
using namespace std;
int arr[1004];
vector<int>v;
void solve(int i,int sum){
    if(i==-1){
        v.push_back(sum);
        return ;
    }
     solve(i-1,sum+arr[i]);
     solve(i-1,sum);
}
int main(){
  int n;
  cin>>n;
  int total_sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total_sum+=arr[i];
    }
    solve(n-1,0);
    int find_sum=total_sum/2;
  
    int ans=0;
   
    for(int i=0;i<v.size();i++){
        if(v[i]<=find_sum) {
            ans= total_sum-2*v[i];
            break;
        }
    }
    cout<<ans<<endl;
    


}