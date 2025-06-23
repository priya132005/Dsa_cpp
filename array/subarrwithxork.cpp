#include<bits/stdc++.h>
using namespace std;
int countsubarr(vector<int>&num,int k){
    int n=num.size();
    int count=0;
    int xr=0;
    map<int,int>mp;
    mp[xr]++;
    for(int i=0;i<n;i++){
       xr=xr^num[i];
       int x=xr^k;
       count+=mp[x] ;
       mp[xr]++;
    }
    return count;
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int x=countsubarr(ans,3);
  cout<< x;
  return 0;
}