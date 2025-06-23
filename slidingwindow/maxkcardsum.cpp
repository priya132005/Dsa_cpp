#include <bits/stdc++.h>
using namespace std;

int maxkcardsum(vector<int>nums,int k){
    int n=nums.size();
    int lsum=0;
    int rsum=0;
    int mxsum=0;
    for(int i=0;i<k;i++){
        lsum+=nums[i];
        
    }
    mxsum=lsum;
    int r=n-1;
    for(int i=k-1;k>=0;k--){
        lsum-=nums[i];
        rsum+=nums[r];
        r=r-1;
 mxsum=max(mxsum,lsum+rsum);
    }
    
    return mxsum;
}
int main(){
    int n=8;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x=maxkcardsum(v,4);
    cout<<x<<endl;
    return 0;
}