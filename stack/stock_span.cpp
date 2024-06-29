#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back({x,i});
    }
    stack<pair<int ,int>>st;
    vector<int>ans;

    for(int i=0;i<n;i++){
        while(!st.empty() && st.top().first < vec[i].first){
            st.pop();
        }
        if(st.size()==0){
            ans.push_back(-1);
            st.push(vec[i]);
        }
        else{
            ans.push_back(st.top().second);
            st.push(vec[i]);
        }
    }
    vector<int>f_ans;
    f_ans.push_back(-1);
    for(int i=1;i<ans.size();i++){
        f_ans.push_back((vec[i].second-ans[i]));
    }
    for(auto it : f_ans){
        cout<<it<<" ";
    }
}