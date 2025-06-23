#include<bits/stdc++.h>
using namespace std;
int mxcon1(vector<int>&num){
    int n=num.size();
    int mx=INT_MIN;int count=0;
    for(int i=0;i<n;i++){
        if(num[i]==1){count++;
        mx=max(mx,count);
    }
    else count=0;
      
    }
    return mx;
}
int main(){
    int n=7;
    vector<int>ans(n);
    
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<mxcon1(ans);
    return 0;
}