#include<bits/stdc++.h>
using namespace std;
void replace1(vector<int>&num){
    int n=num.size();
    int t=num[0];
    for(int i=0;i<n;i++){
        num[i]=num[i+1];
    }
    num[n-1]=t;
}

int main(){
    int n=6;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    replace1(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}