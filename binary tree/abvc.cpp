#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;

    cin>>s>>s>>s;

    vector<int>val;

    for(int i=0;i<n;i++){
        cin>>s;
        int len = s.size();

        bool flag = false;

        for(int j = 0 ; j< len ; j++){
            char c = s[j];
            int ascii= c;
             

            if(ascii>=48 && ascii<=57){
                flag = true;
                string s2;
                for(int k = 0;k<len;k++){
                    char d = s[k];
                    int a=d;
                    if(a>=48 && a<=57){
                        s2.push_back(d);
                    }
                }
                int X = stoi(s2);
                val.push_back(X);
                break;
            }
        }
        if(flag)continue;
        val.push_back(len);
    }
    sort(val.begin(),val.end());
    cout<<val[n-1]*val[n-2];

}