#include<bits/stdc++.h>
using namespace std;
int countnby2ele(vector<int>&num){
    int n=num.size();
    int count=0;int el;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=num[i];

        }
        else if(el=num[i])count++;
        else count--;

    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(num[i]==el)cnt++;
        if(cnt>n/2)return el;
    }
    
   return -1;
}
int main(){
    int n=7;
    vector<int>ans(n);
    int t=4;

    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
   cout<<countnby2ele(ans);
    return 0;
}