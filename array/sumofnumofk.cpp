#include<bits/stdc++.h>
using namespace std;
int countsubarr(vector<int>&num,int k){
    int n=num.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=num[j];
            if(sum==k)count++;
        }
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