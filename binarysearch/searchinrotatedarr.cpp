#include<bits/stdc++.h>
using namespace std;
int searchinrotatedarr(vector<int>&nums,int k){
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(nums[mid]==k)return mid;
        if(nums[lo]<=nums[mid]){
            if(nums[lo]<=k and nums[mid]>=k){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        else{
            if(nums[mid]<=k and nums[hi]>=k){
                lo=mid+1;
            }
            else hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int n=6;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];

    }
    int x=searchinrotatedarr(ans,6);
    cout<<x<<endl;
}