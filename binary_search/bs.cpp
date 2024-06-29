#include<bits/stdc++.h>
using namespace std;
void bs(vector<int>&v,int l,int r,int key){
if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==key){
            cout<<"key found at index at : "<<mid;
            return ;
        }
        else if(v[mid]<key){
            l=mid+1;
            bs(v,l,r,key);
        }
        else{
            r=mid-1;
            bs(v,l,r,key);
        }
    }else{
        cout<<"not found"<<endl;
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
    bs(v,l,r,5);
}