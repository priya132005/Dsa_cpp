#include<bits/stdc++.h>
using namespace std;
bool binarysearch(vector<int>&num,int x){
    int n=num.size();
    int lo=0;
    int hi=n-1;
    int mid=(hi+lo)/2;
    while(lo<=hi){
        if(num[mid]==x)return true;
         else if(num[mid]>x)hi=mid-1;
          else lo=mid+1;
    }
    return false;
    
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    if(binarysearch(ans,3)==true)cout<<"yes";
    else cout<<"no";

    
  return 0;
}