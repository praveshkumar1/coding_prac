#include<bits/stdc++.h>
using namespace std;

void solve(string inp,string out,int &cnt){
    if(inp.length()==0){
        cout<<out<<" ";
        cnt++;
        return ;
    }
    string out1=out;
    string out2=out;
    out2.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    solve(inp,out1,cnt);
    solve(inp,out2,cnt);
    return ;
}
int main(){
    int cnt=0;
    string inp;
    cin>>inp;
    string outp="";
    solve(inp,outp,cnt);
    cout<<endl;
    cout<<cnt;
}