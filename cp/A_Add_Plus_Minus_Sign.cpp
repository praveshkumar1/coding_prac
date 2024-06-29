#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(100);
    
         for(int i=0;i<(n-1)*n;i++){
                cin>>v[i];
                
    }
    
    vector<int>a(n-1),b(n-1),c(n-1),e(n-1);
    for(int i=0;i<n;i++){
        a[i]=v[i];
        
    }
    v.erase(v.begin(),v.begin()+n-1);
    for(int i=0;i<n;i++){
        b[i]=v[i];
       
    }
     v.erase(v.begin(),v.begin()+n-1);
    for(int i=0;i<n;i++){
        c[i]=v[i];
       
    }
     v.erase(v.begin(),v.begin()+n-1);
     for(int i=0;i<n;i++){
        e[i]=v[i];
     }
     for(auto it:a){
        cout<<it<<" ";
     }
    //  cout<<endl;
    vector<int>d;
    d=a;
    sort(d.begin(),d.end());
    int t;
    for(int i=0;i<n;i++){
        if(d[i]!=i+1){
             t=i+1;
            break;
        }
    }
    //cout<<t;
    
    int temp1,temp2;
    for(int i=0;i<n;i++){
        if(b[i]==t){
            temp1=b[i-1];
            temp2=b[i+1];
        }
    }
    int ans;
    for(int i=0;i<n;i++){
        if(c[i]==t){
            if(c[i-1]==temp1){
                ans=temp1;
            }
            else if(c[i+1]==temp2){
                ans=temp2;
            }
        }
    }
    for(int i=0;i<n;i++){
          if(e[i]==t){
            if(e[i-1]==temp1){
                ans=temp1;
            }
            else if(e[i+1]==temp2){
                ans=temp2;
            }
        }
    }
    int z;
    for(int i=0;i<a.size();i++){
        if(a[i]==ans){
            z=i+1;
        }
    }
    for(int i=0;i<z;i++){
        cout<<a[i]<<" ";
    }
    cout<<t<<" ";
    for(int i=z;i<a.size();i++){
        cout<<a[i]<<" ";
    }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}