#include <bits/stdc++.h>
using namespace std;

int seclargest(vector<int>& num) {
    int mx = INT_MIN, smx = INT_MIN;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] > mx) {
            smx = mx;
            mx = num[i];
        } else if (num[i] > smx && num[i] < mx) {
            smx = num[i];
        }
    }

    return (smx == INT_MIN) ? -1 : smx; 
}

int main() {
    int n = 9;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    int result = seclargest(ans);
    if (result == -1)
        cout << "No second largest element exists." << endl;
    else
        cout << "Second largest number is: " << result << endl;

    return 0;
}
