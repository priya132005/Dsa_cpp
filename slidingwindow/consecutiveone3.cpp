#include <bits/stdc++.h>
using namespace std;

int consecutiveone3(vector<int>nums,int k) {
    int n = nums.size();
    int l = 0, r = 0;
    int mxlen = 0;int zero=0;
   

    while (r < n) {
       if(nums[r]==0)zero++;
        if(zero>k){
            if(nums[l]==0)zero--;
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
    int x = consecutiveone3(ans,2);
    cout << x << endl;
    return 0;
}
