//a nearly sorted array is an array that have the ith index at ith or i+1 th index or i-1th index
#include<bits/stdc++.h>
using namespace std;
void nearly_sorted_search(vector<int>v,int l,int r,int key ){
    if(l<=r){
    int mid=l+(r-l)/2;
    if(v[mid]==key){
        cout<<"key is on index :"<<mid;
        return ;
    }else if(v[mid-1]==key){
        cout<<"key is on index that is i-1: "<<mid-1;
        return ;
    }else if(v[mid+1]==key){
        cout<<"key is on index that is i+1: "<<mid+1;
        return ;
    }
    else if(v[mid]>key){
        r=mid-2;
        nearly_sorted_search(v,l,r,key);
    }
    else{
        l=mid+2;
        nearly_sorted_search(v,l,r,key);
    }
    }else{
        cout<<"not present "<<endl;
    }
    
}
int main(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int l=0;
int r=v.size()-1;
nearly_sorted_search(v,l,r,3);
}