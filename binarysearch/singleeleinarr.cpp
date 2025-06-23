#include<bits/stdc++.h>
using namespace std;
int singleeleinarr(vector<int>&nums){
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^nums[i];

    }
    return ans;
}
int main(){
    int n=7;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];

    }
    int x=singleeleinarr(ans);
    cout<<x<<endl;
}