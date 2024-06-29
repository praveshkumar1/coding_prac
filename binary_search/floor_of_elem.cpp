//another approach to this question is this that we can search the element till l<=r if we are not finding the element . while doing this we can store the result variable which will have the possible answer in the array 
#include<bits/stdc++.h>
using namespace std;
void floor_search(vector<int>v,int l,int r,int key){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==key){
            cout<<"found at the index "<<mid;
            return ;
        }else{
            if(v[mid]<key && v[mid+1]>key){
                cout<<"elem not present and floor is mid itself "<<mid;
                return ;
            }
            else if(v[mid-1]<key && v[mid]>key){
                cout<<"element not found the floor is present at the index: "<<mid-1;
                return ;
            }else if(v[mid]>key){
                r=mid-1;
                floor_search(v,l,r,key);
            }else{
                l=mid+1;
                floor_search(v,l,r,key);
            }
        }
    }else{
        if(key>v[v.size()-1]){
            cout<<"answer is "<<v[v.size()-1];
        }
        else if(key<v[0]){
            cout<<"answer is "<<v[0];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int l=0;
    int r=n-1;
    floor_search(v,l,r,20);
}