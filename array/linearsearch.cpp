#include <bits/stdc++.h>
using namespace std;

int remove0toend(vector<int>&ans,int target){
    int n=ans.size();
    for(int i=0;i<n;i++){
        if(ans[i]==target)return i;

    }
    return -1;
    
}

int main() {
    int n = 5;int t=8;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

   cout<<remove0toend(ans,t);
 
    return 0;
}
