//nice concept .. here we expand the binary search concept 
#include<bits/stdc++.h>
using namespace std;
void rotation_times(vector<int>&v,int l,int r){
    int mid=l+(r-l)/2;
    if(v[mid-1]>v[mid] && v[mid+1]>v[mid]){
        cout<<"the array is rotated : "<<v.size()-mid<<"times "<<endl;
    }
    else if(v[mid]<v[l]){
        r=mid-1;
        rotation_times(v,l,r);
    }else{
        l=mid+1;
        rotation_times(v,l,r);
    }
}
int main(){
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int l=0;
int r=n-1;
rotation_times(v,l,r);
}