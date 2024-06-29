#include<bits/stdc++.h>
using namespace std;
void nge(vector<int>nums2){
stack<int>st;
        vector<int>ans;
        for(int i=nums2.size()-1;i>=0;i--){
                while(!st.empty() && st.top()<nums2[i]){
                    st.pop();
                }
                if(st.size()==0){
                    st.push(nums2[i]);
                    ans.push_back(-1);
                }else{
                     ans.push_back(st.top());
                     st.push(nums2[i]);
                }  
        }
        reverse(ans.begin(),ans.end());
        for(auto it: ans){
            cout<<it<<" ";
        }
}
int main(){
    vector<int>vec;
   int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        int x=arr[i];
        vec.push_back(x);
    }
    nge(vec);
}