#include<bits/stdc++.h>
using namespace std;
int stock1(vector<int>&num){
    int n=num.size();
    int profit=0;
    int mini=num[0];
    for(int i=1;i<n;i++){
    int cost=num[i]-mini;
    profit=max(profit,cost);
    mini=min(mini,num[i]);

    }
    return profit;
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int x=stock1(ans);
  cout<< x;
  return 0;
}