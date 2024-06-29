#include<bits/stdc++.h>
using namespace std;
// void print (string inp,string out){
//     if(inp==""){
//         cout<<out<<endl;
//         return;
//     }
//     if(inp[0]>='A' && inp[0]<='Z'){
//         string out1=out;
//         out1.push_back(inp[0]);
//         string out2=out;
//         out2.push_back(inp[0]+32);
//         inp.erase(inp.begin()+0);
//         print(inp,out1);
//         print(inp,out2);
//     }
//     else if(inp[0]>='a' && inp[0]<='z'){
//         string out1=out;
//         out1.push_back(inp[0]);
//         string out2=out;
//         out2.push_back(inp[0]-32);
//         inp.erase(inp.begin()+0);
//         print(inp,out1);
//         print(inp,out2);
//     }
//     else {
// string outp=out;
//     outp.push_back(inp[0]);
//     inp.erase(inp.begin()+0);
//     print(inp,outp);
    
//     }
  
// }
// int main(){
//     string inp;
//     cin>>inp;
//     string out="";
//     print(inp,out);
// }
void solve(string inp,vector<string>&ans,string s){
            if(inp==""){
                ans.push_back(s);
                return;
            }
            string out1=s;
            string out2=s;
            out1.push_back(inp[0]);
            inp.erase(inp.begin()+0);
            solve(inp,ans,out1);
            solve(inp,ans,out2);
            return;
        }
string getPermutation(int n, int k) {
        string inp="";
        for(int i=49;i<=49+n-1;i++){
            inp.push_back(char(i));
        }
        cout<<inp<<endl;
        string out="";
        vector<string>ans;
        solve(inp,ans,out);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        return ans[k-1];
    }
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
cout<<getPermutation(n,k);
}