#include<bits/stdc++.h>
using namespace std;
int khadane(vector<int>& num) {
    int n = num.size();
    int sum = 0;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += num[i];
        if (sum > mx) mx = sum;
        if (sum < 0) sum = 0;
    }

    return mx;
}
int main(){
    int n=7;
    vector<int>ans(n);
  

    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<khadane(ans);
    return 0;
}