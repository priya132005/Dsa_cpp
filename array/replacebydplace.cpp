#include<bits/stdc++.h>
using namespace std;
void replaceD(vector<int>& a, int d, int n) {
    reverse(a.begin(), a.begin() + d);
    reverse(a.begin() + d, a.end());
    reverse(a.begin(), a.end());
}
int main(){
    int n=6;int d=4;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    replaceD(ans,d,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}