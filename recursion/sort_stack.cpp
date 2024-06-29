#include<bits/stdc++.h>
using namespace std;
void insert_st(stack<int>&st,int x){
    if(st.size()==0){
        st.push(x);
        return ;
    }
    int temp_2=st.top();
    st.pop();
    insert_st(st,x); //ye stack ke last mein element daal dega so we only need to push the first element on top 
    st.push(temp_2);
}
    void rev_st(stack<int>&st){
        if(st.size()==1){
            return ;
        }
        int temp=st.top();
        st.pop();
        rev_st(st); //ye stack reverse kar dega for a entry less . So after this we only need to insert the top element to the last as now the stack is reversed , it is taking o(n) space complexity so we try to use stack for this as well 
        insert_st(st,temp);
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
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    if(st.size()==0){
        cout<<"stack is empty "
        ;
    }
    rev_st(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}