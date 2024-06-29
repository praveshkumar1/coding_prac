#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==1){
        cout<<"1"<<" ";
        return ;
    }
    print(n-1); //ye muze print kar dega 1-n numbers bas muze n hi print karna hai 
  cout<<n<<" ";
}
int factorial(int n){
    if(n==1){
        return 1;
    }
   return factorial(n-1) * n;  // factorial(n-1) muze dega factorial of n-1 bas muze n se aur multiply karna hai 
}
int main(){
    print(7);
    cout<<endl;
cout<<factorial(2);
}