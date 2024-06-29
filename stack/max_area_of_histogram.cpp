#include<bits/stdc++.h>
using namespace std;
vector<int> nsl(vector<pair<int,int>>&vec){
    stack<pair<int,int>>st;
    vector<int>ans;
    for(int i=0;i<vec.size();i++){
        while(!st.empty() && st.top().first>vec[i].first){
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

    return ans;
}
vector<int> nsr(vector<pair<int,int>>&vec){
    vector<int>ans;
    stack<pair<int,int>>st;
    for(int i=vec.size()-1;i>=0;i--){
        if(st.size()==0){
            ans.push_back(vec.size());
        }
        else{
            while(!st.empty() && st.top().first>vec[i].first){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(vec.size());
            }
            else{
                ans.push_back(st.top().second);
            }
        }
        st.push(vec[i]);
    }
        reverse(ans.begin(),ans.end()); 
return ans;
}
int main(){
    vector<pair<int,int>>inp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        inp.push_back({c,i});
    }
    vector<int>nsla,nsra;
    nsla=nsl(inp);
    nsra=nsr(inp);
    for(auto it: nsla){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: nsra){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>f_ans;
    for(int i=0;i<n;i++){
        f_ans.push_back(((nsra[i]-nsla[i])-1)*inp[i].first);
        cout<<f_ans[i]<<" ";
    }

}