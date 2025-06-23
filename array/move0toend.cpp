#include <bits/stdc++.h>
using namespace std;

void remove0toend(vector<int>&ans){
     int n=ans.size();
     int j=-1;
   for(int i=0;i<n;i++){
    if(ans[i]==0){ j=i;
        break;
    }
   }
   for(int i=j+1;i<n;i++){
    if(ans[i]!=0){swap(ans[i],ans[j]);
    j++;}
   }
}

int main() {
    int n = 5;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

   remove0toend(ans);
 for (int i = 0; i < n; i++) {
        cout<< ans[i];
    }
    return 0;
}
