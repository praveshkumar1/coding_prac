#include<bits/stdc++.h>
using namespace std;
void print(string inp,string out){
    if(inp==""){
        cout<<out<<" ";
        return ; 
    }
    string out1=out;
    out1.push_back(inp[0]);//ek baar chote a ko lena hai 
    string out2=out;
    out2.push_back(inp[0]-32);//ek baar bade A ko lena hai and make recursive tree  
                                                                              
    inp.erase(inp.begin()+0); //input ko chota karnaa hai 
    print(inp,out1);
    print(inp,out2);
    return ;
}
int main(){
    string inp;
    cin>>inp;
    string out;
    out="";
    print(inp,out);
}