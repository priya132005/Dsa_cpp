#include<bits/stdc++.h>
using namespace std;
int appear1s(vector<int>&num){
    int n=num.size();int mx=0;
    for(int i=0;i<n;i++){
        mx=mx^num[i];
    }
    return mx;
}
int main(){
    int n=7;
    vector<int>ans(n);
    
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<appear1s(ans);
    return 0;
}