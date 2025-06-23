#include <bits/stdc++.h>
using namespace std;

int basketinfruit(vector<int>nums,int k) {
    int n = nums.size();
    int l = 0, r = 0;
    int mxlen = 0;
     unordered_map<int,int>mp;
    while (r < n) {
     mp[nums[r]]++;
        if(mp.size()>k){
            mp[nums[l]]--;
            if(mp[nums[l]]==0)mp.erase(nums[l]);
            l++;
            
        }
        mxlen = max(mxlen, r - l + 1);
        r++;
       
    }
    return mxlen;
}

int main() {
   int n=7;
   vector<int>ans(n);
   for(int i=0;i<n;i++){
    cin>>ans[i];
   }
    int x = basketinfruit(ans,2);
    cout << x << endl;
    return 0;
}
