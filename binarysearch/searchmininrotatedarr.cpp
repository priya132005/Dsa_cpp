#include<bits/stdc++.h>
using namespace std;
int searchmininrotatedarr(vector<int>&nums){
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    int ans=INT_MAX;
    int ind=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
       
        if(nums[lo]<=nums[mid]){
           if(nums[lo]<ans){
            ind=lo;
            ans=nums[lo];
           }
            lo=mid+1;
        }
        else {
            if(ans>nums[mid]){
                ind=mid;
                ans=nums[mid];

            }
            hi=mid-1;
       
        }
       
    }
    return ind;
}
int main(){
    int n=6;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];

    }
    int x=searchmininrotatedarr(ans);
    cout<<x<<endl;
}