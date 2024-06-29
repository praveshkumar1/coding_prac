#include<bits/stdc++.h>
using namespace std;
void my_insert(vector<int>&v,int n){
    if(v.size()==0 || v[v.size()-1]<=n){
        v.push_back(n);
        return ;
    }
    int temp_2=v[v.size()-1];
    v.pop_back();
    my_insert(v,n);
    v.push_back(temp_2);
}
void my_sort(vector<int>&v){
    if(v.size()==1){
        return ;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    my_sort(v);   //my sort jo maine lagaya hai on a smaller vector usse mere array sort ho jayegi bas jo ek element last mein hai use apni sahi jaagah lagana hai 
    my_insert(v,temp);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=n-i;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" - ";
    }
    cout<<endl;
    my_sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}