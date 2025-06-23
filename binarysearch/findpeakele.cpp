#include<bits/stdc++.h>
using namespace std;
int peakele(vector<int>&arr){
    int n=arr.size();
    if(n==1)return -1;
    int lo=1;
    int hi=n-2;
    
   if(arr[0]>arr[1])return 0;
   if(arr[n-1]>arr[n-1])return n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
       if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])return mid;
       else if(arr[mid]>arr[mid-1])lo=mid+1;
       else if( arr[mid]>arr[mid+1])hi=mid-1;
       
    }
    return -1;
}
int main(){
    int n=6;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];

    }
    int x=peakele(ans);
    cout<<x<<endl;
}