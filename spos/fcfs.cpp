#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    vector<pair<int,int>>vp;
    for(int i=0;i<5;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }

    vector<int>wt;
    vector<int>ans;
    sort(vp.begin(),vp.end());
    ans.push_back(1);
    wt.push_back(vp[0].first);
   int ini_time=vp[0].first+ vp[0].second;
    for(int i=1;i<n;i++){
        vector<pair<int,int>>temp;
        for(int j=i;j<ini_time;j++){
            if(vp[0].first==j){
                temp.push_back({i+1,vp[i].second});
            }
        }
        sort(temp.begin(),temp.end());
        ini_time= temp[0].first;
    }
}