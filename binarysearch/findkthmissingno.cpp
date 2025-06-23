#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&nums,int k){
    int lo=0;
    int hi=nums.size()-1;
    int miss;
    while(lo<=hi){
        
        int mid=(lo+hi)/2;
        miss=nums[mid]-(mid+1);
        if(miss<k)lo=mid+1;
        else hi=mid-1;
    }
    return lo+k;
}
int main(){
    int n=5;
    vector<int>ans(5);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int x=missing(ans,3);
    cout<<x<<endl;
    return 0;
}