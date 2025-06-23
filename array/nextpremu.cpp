#include<bits/stdc++.h>
using namespace std;
void nextpremu(vector<int>& num) {
    int n = num.size();
    int idx = -1;

    // Step 1: Find the first index from the end where num[i] < num[i+1]
    for (int i = n - 2; i >= 0; i--) {
        if (num[i] < num[i + 1]) {
            idx = i;
            break;
        }
    }

    // Step 2: If not found, reverse the whole array and return
    if (idx == -1) {
        reverse(num.begin(), num.end());
        return;
    }

    // Step 3: Find the number just larger than num[idx] from the end
    for (int i = n - 1; i > idx; i--) {
        if (num[i] > num[idx]) {
            swap(num[i], num[idx]);
            break;
        }
    }

    // Step 4: Reverse the rest
    reverse(num.begin() + idx + 1, num.end());
}
int main(){
    int n=5;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
   nextpremu(ans);
 for(int i=0;i<n;i++){
        cout<<ans[i];
    }
  return 0;
}