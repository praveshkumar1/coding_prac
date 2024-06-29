#include<bits/stdc++.h>
using namespace std;
void del_middle(stack<int>&st,int n){
    if(st.size()==n/2+1){
        st.pop();
        return ;
    }
    int temp=st.top();
    st.pop();
    del_middle(st,n);
    st.push(temp);
}
int main(){
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    int m=st.size();
    del_middle(st,m);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}