#include <bits/stdc++.h>
using namespace std;

int removedup(vector<int>&ans){
     int n=ans.size();
   unordered_set<int>st;
      for(auto it:ans){
        st.insert(it);
      }
      return st.size();

}

int main() {
    int n = 5;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

   cout<<removedup(ans);

    return 0;
}
