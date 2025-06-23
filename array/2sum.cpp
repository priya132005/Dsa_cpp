#include<bits/stdc++.h>
using namespace std;
bool twosum(vector<int>&num,int target){
    int n=num.size();
    int i=0,j=num.size();
    while(i<j){
        int s=num[i]+num[j];
        if(s==target){
            return true;
        }
        else if(s>target)j--;
        else i++;
    }
    return false;
   
}
int main(){
    int n=7;
    vector<int>ans(n);
    int t=4;

    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    if(twosum(ans,t)==true)cout<<"yes";
    else cout<<"no";
    return 0;
}