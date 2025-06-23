#include <bits/stdc++.h>
using namespace std;
int binarysum(vector<int>&nums,int g){
    int n=nums.size();
    int r=0;
    int l=0;
    int sum=0;
    int cnt=0;
    while(r<n){
        sum+=nums[r];
        while(sum>g){
            sum=-nums[l];
            l++;
        }
        cnt+=(r-l+1);
          r++;
    }
    return cnt;
}


int main() {
   int n=3;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int x=binarysum(v,2);
    cout << x << endl;
    return 0;
}
