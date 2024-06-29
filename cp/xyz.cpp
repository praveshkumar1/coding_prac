#include<bits/stdc++.h>
using namespace std;
bool check_valid_subarray(int i,int j,vector<int>&nums){
        vector<int>mp(1e+5,0);
        for(int k=i;k<=j;k++){
            if(mp[nums[k]]==0) mp[nums[k]] ++;
            else return false;
        }
        return true;
    }
    int find_sum(int i,int j,vector<int>&nums){
        int subarray_sum =0;
        for(int k=i;k<=j;k++){
            subarray_sum+=nums[k];
        }
        return subarray_sum;
    }    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i =0;
        int j = k-1;
        int max_sum = 0;
        while(j<nums.size()){
           if(check_valid_subarray(i,j,nums)){
                max_sum = max(find_sum(i,j,nums),max_sum);
           }
           i++;
           j++;
        }
        return max_sum;
    }

int main(){
  int n;
  cin>>n;
  vector<int>nums;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    nums.push_back(a);
  }
  int k ;
  cin>>k;
  cout<<"this is answer"<<maximumSubarraySum(nums,k)<<endl;
}