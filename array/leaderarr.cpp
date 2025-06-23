#include<bits/stdc++.h>
using namespace std;
vector<int> leaderarr(vector<int>&num){
    int t=num.size();
    int mx=INT_MIN;
    vector<int>ans;
    for(int i=t-1;i>=0;i--){
        if(num[i]>mx){
            ans.push_back(num[i]);
             mx=max(mx,num[i]);
           
        }
    
    }

   
   return ans;

   
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
vector<int>num=leaderarr(ans);
 for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }
  return 0;
}