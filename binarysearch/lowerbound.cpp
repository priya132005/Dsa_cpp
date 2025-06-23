#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>& num, int x) {
    int n = num.size();
    int lo = 0;
    int hi = n - 1;
    int ans = n; // Default to n if no element >= x

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (num[mid] >= x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}
int upperbound(vector<int>& num, int x) {
    int n = num.size();
    int lo = 0;
    int hi = n - 1;
    int ans = n; // Default to n if no element >= x

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (num[mid] > x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n = 5;
    vector<int> ans(n);
    cout << "Enter 5 elements (sorted or unsorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end()); // Ensure the vector is sorted

    int x = 4;
    int index = lowerbound(ans, x);
     int ind = upperbound(ans, x);
    cout << "Lower bound index for 4 is: " << index << endl;
    cout << "upper bound index for 4 is: " << ind << endl;
    return 0;
}
