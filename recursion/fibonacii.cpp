#include<bits/stdc++.h>
using namespace std ;
int fibo(int n){
    if(n==0){
        cout<<0;
    }
    if(n==1){
       cout<<1;
    }
    cout<<fibo(n-1)<<" "<<fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}