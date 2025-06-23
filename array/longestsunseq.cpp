#include <bits/stdc++.h>
using namespace std;

int longestsubseq(vector<int>&ans){
    int n=ans.size();
    if(n==0)return 0;
    
    int mx=1;
    unordered_set<int>st;
    for(int it:ans){
       st.insert(it);

    }
    for(int i:st){
        if(st.find(i-1)==st.end()){
        int cnt=1;
      int it=i;
        while(st.find(it+1)!=st.end()){
            it=it+1;
            cnt++;
        }
        mx=max(mx,cnt);
    }
}
    return mx;
    
}

int main() {
    int n = 5;int t=8;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

   cout<<longestsubseq(ans);
 
    return 0;
}
