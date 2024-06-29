#include<bits/stdc++.h>
using namespace std;
vector<int> ngl(vector<int>&v){
    stack<pair<int,int>>st;
    vector<int>ans;
 
    for(int i=v.size()-1;i>=0;i--){
        while(!st.empty() && st.top().first<v[i]){
            st.pop();
            
        }
        
        if(st.size()==0){
            st.push({v[i],i});
                                                                                                                                                                                                                                                    
            ans.push_back(i);
        }
        else{
            ans.push_back(st.top().second);
         
            st.push({v[i],i});
            
            
        }
    }
    
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        ans[i]=(ans[i]-i)*v[i];
    }
    return ans;
}
vector<int> ngr(vector<int>&v){
    stack<pair<int,int>>st;
    vector<int>ans;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && st.top().first<v[i]){
            st.pop();
        }
        if(st.size()==0){
            ans.push_back(i);
            st.push({v[i],i});
            
        }
        else{
              ans.push_back(st.top().second);
            st.push({v[i],i});
          
        }
    }
   
    for(int i =0;i<ans.size();i++){
         ans[i]=(i-ans[i])*v[i];
    }
    return ans;
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
vector<int>a,b;

a=ngl(v);
b=ngr(v);
for(auto it : a){
    cout<<it<<" ";
}
cout<<endl;
for(auto it: b){
    cout<<it<<" ";
}

}