#include<bits/stdc++.h>
using namespace std;
void altnegpos(vector<int>&num){
    int t=num.size();
    vector<int>neg;
    vector<int>pos;
    for(int i=0;i<t;i++){
    if(num[i]>0)pos.push_back(num[i]);
    else neg.push_back(num[i]);

    }
    int n=neg.size(),m=pos.size();
   if(m>n){
    for(int i=0;i<n;i++){
        num[2*i]=pos[i];
        num[2*i+1]=neg[i];
    }
    int idx=2*n;
    for(int i=n;i<m;i++){
        num[idx]=pos[i];
        idx++;
    }

   }
   else{
    for(int i=0;i<m;i++){
        num[2*i]=pos[i];
        num[2*i+1]=neg[i];
    }
    int idx=2*m;
    for(int i=m;i<n;i++){
        num[idx]=neg[i];
        idx++;
    }

   }
   

   
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
   altnegpos(ans);
 for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
  return 0;
}