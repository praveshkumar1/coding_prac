//ek dum khud se kiya hai 
#include<bits/stdc++.h>
using namespace std;
vector<string>vs;
vector<string> print(string s,string out){
    if(s.size()==1){
        vector<string>base;
        base.push_back(s);
        return base;
    }
    char ls=s[s.size()-1];
    s.pop_back();
    vector<string>ans;
    vector<string>temp=print(s,out);
    for(int i=0;i<temp.size();i++){
        string s=temp[i];
        for(int i=0;i<s.size()+1;i++){
        s.insert(s.begin()+i,ls);
        ans.push_back(s);
        s.erase(s.begin()+i);
    }
    }
    return ans;

}
int main(){
    string s;
    cin>>s;
    string out;
    vector<string>f_ans=print(s,out);
    sort(f_ans.begin(),f_ans.end());
    for(auto it: f_ans){
        cout<<it<<endl;
    }
}