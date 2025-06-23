#include <bits/stdc++.h>
using namespace std;

// Function to count required days to ship with capacity cap
int count(vector<int>& num, int cap) {
    int total = 0;
    int load = 0;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] + load > cap) {
            total++;
            load = num[i];
        } else {
            load += num[i];
        }
    }

    // Don't forget the last load
    return total + 1;
}

// Binary search to find the minimum ship capacity to deliver in 'days' days
int noofdayship(vector<int>& num, int days) {
    int mx = *max_element(num.begin(), num.end());
    int sum = accumulate(num.begin(), num.end(), 0);

    int lo = mx;
    int hi = sum;
    int ans = sum;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int requiredDays = count(num, mid);
        if (requiredDays <= days) {
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
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int x = noofdayship(weights, 5);
    cout << x << endl;

    return 0;
}
