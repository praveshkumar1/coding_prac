#include<bits/stdc++.h>
using namespace std;
void print(string inp,string out){
    if(inp==""){
        cout<<out<<endl;
        return ;
    }
   
    string out1=out;
    out1.push_back('_');  //ek baar space ke sath include karna hai 
    out1.push_back(inp[0]);
    string out2=out;
    out2.push_back(inp[0]);
    inp.erase(inp.begin()+0); //dusri turn mein without _ include karna hai
    print(inp,out1);
    print(inp,out2);
}
int main(){
    string inp;
    cin>>inp;
    string out="";
    out.push_back(inp[0]);
    inp.erase(inp.begin()+0);
    print(inp,out);
}