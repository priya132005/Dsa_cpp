#include <bits/stdc++.h>
using namespace std;

int findnum(vector<int>& ans) {
    int n = ans.size();
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ans[i];
    }
    return total - sum;
}
int findnumxor(vector<int>&num){
    int n=num.size();
    int xor1=0;int xor2=0;
    // for(int i=1;i<=n;i++){
    //    xor1^=i;
       
    // }
    for(int i=0;i<n;i++){
      xor1^=i+1;
       xor2^=num[i];
    }
    return xor1^xor2;
}

int main() {
    int n = 5;
    vector<int> ans(n); // Allocate space for 'n' elements

    
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    int missing = findnumxor(ans);
    cout << "Missing number: " << missing << endl;

    return 0;
}
