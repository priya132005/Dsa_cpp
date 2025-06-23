#include<bits/stdc++.h>
using namespace std;
int subarr(vector<int>&nums,int k){
    int l=0;
    int r=0;
    int cnt=0;
    unordered_map<int,int>mp;
    while(r<nums.size()){
        mp[nums[r]]++;
        while(mp.size()>k){
            mp[nums[l]]--;
       if(mp[nums[l]]==0)  mp.erase(nums[l]);
            l++;
        }
        cnt+=(r-l+1);
        r++;

    }
    return cnt;
}
int main(){
    int n=8;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int x=subarr(ans,3);
    cout<<x<<endl;
    return 0;

}