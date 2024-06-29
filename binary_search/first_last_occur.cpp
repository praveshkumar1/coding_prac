#include<bits/stdc++.h>
using namespace std;
void first_occur(vector<int>&v,int l,int r,int key,int &res){

    if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==key){
            res=mid;
           
            r=mid-1;
            first_occur(v,l,r, key, res);
        }else if(v[mid]<key){
            l=mid+1;
            first_occur(v,l,r, key, res);
        }else{
            r=mid-1;
            first_occur(v,l,r, key, res);
        }
    }else{
        if(res==-1){
            cout<<"not found "<<endl;
        }else{
            cout<<"found at index "<<res;
        }
        return ;
    }
}
void last_occur(vector<int>v,int l,int r,int key,int res){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==key){
            res=mid;
            l=mid+1;
            last_occur(v,l,r,key,res);
        }else if(v[mid]<key){
            l=mid+1;
            last_occur(v,l,r,key,res);

        }else{
            r=mid-1;
            last_occur(v,l,r,key,res);

        }

    }
    else{
if(res==-1){
    cout<<"not found"<<endl;
}else{
    cout<<"found at :"<<res<<endl;
}
return ;
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int l=0;
    int r=n-1;
  //  int key=2;
    int res=-1;
// while(l<=r){
//     int mid=l+(r-l)/2;
//     if(v[mid]==key){
//         res=mid;
        
//         r=mid-1;
//     }else if(v[mid]<key){
//         l=mid+1;
//     }else{
//         r=mid-1;
//     }
// }
// if(res==-1){
//     cout<<"not found"<<endl;
// }else{
//     cout<<"found at "<<res<<endl;
// }
first_occur(v,l,r, key, res);
res=-1;
last_occur(v,l,r,key,res);
//for no.of count last occurence -first occurence ;
}