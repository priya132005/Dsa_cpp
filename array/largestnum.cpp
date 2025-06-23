#include<bits/stdc++.h>
using namespace std;
int largestnum(vector<int>&num){
    int n=num.size();
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
      mx=max(mx,num[i]);
    }
    return mx;
}
int main(){
    int n=7;
    vector<int>ans(n);
    
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<largestnum(ans);
    return 0;
}