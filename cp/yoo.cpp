#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       cin>>b[i];
    }
long long min_a=*min_element(a.begin(),a.end());
long long min_b=*min_element(b.begin(),b.end());
long long sum_a=accumulate(a.begin(),a.end(),0);
long long sum_b=accumulate(b.begin(),b.end(),0);
long long ans=min(min_a*n+ sum_b , min_b*n +sum_a);
cout<<ans<<endl;
}



signed  main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}