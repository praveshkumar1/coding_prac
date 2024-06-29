#include<bits/stdc++.h>
using namespace std;
void pattern_match(string &st,string &pt){
    int i=0;
    int j=0;
    int ind;
    int bp;
    while(true){
        if((j<pt.size() && i<st.size()) && st[i]==pt[j] ){
            i++;
            j++;
        }else if((j<pt.size() && i<st.size())){
            j=0;
            i++;
        }else{
            if(j==pt.size()){
                ind=i-pt.size();
            }
            else{
                bp=i;
            }
            break;
        }
    }
if(j==pt.size()){
    cout<<"pattern found at "<<ind<<endl;
}else{
    cout<<"not found "<<bp<<endl;
}
}
int main(){
    string st,pt;
    cin>>st>>pt;
    pattern_match(st,pt);
}