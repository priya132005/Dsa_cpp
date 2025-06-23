#include<bits/stdc++.h>
using namespace std;
int mxsum0(vector<int>&num){
    int n=num.size();
    int mx=INT_MIN;int count=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=num[i];
        if(sum==0){
            mx=max(mx,i);
        }
        else {
            if(mp.find(sum)!=mp.end()){
                mx=max(mx,i-mp[sum]);
            }
            mp[sum]=i;
        }
    }
    return mx;
}
int main(){
    int n=7;
    vector<int>ans(n);
    
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<mxsum0(ans);
    return 0;
}