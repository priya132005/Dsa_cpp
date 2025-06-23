#include <bits/stdc++.h>
using namespace std;

// Function to calculate total hours needed at eating speed h
int count(vector<int>& num, int h) {
    int totalh = 0;
    for (int i = 0; i < num.size(); i++) {
        totalh += (num[i] + h - 1) / h;  // ceil division without float
    }
    return totalh;
}

// Function to find minimum h such that total time <= hour
int koko(vector<int>& num, int hour) {
    int mx = *max_element(num.begin(), num.end());
    int lo = 1;  // Avoid division by 0
    int hi = mx;
    int ans = mx;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int total = count(num, mid);
        if (total <= hour) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n = 7;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }
    int x = koko(ans, 9);
    cout << x << endl;
    return 0;
}
