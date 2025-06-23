#include <bits/stdc++.h>
using namespace std;

// Function to check if we can make at least 'm' bouquets with max flower size <= 'd'
bool isPossible(vector<int>& flowers, int d, int m, int k) {
    int n = flowers.size();
    int count = 0;
    int bouquets = 0;

    for (int i = 0; i < n; i++) {
        if (flowers[i] <= d) {
            count++;
            if (count == k) {
                bouquets++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    return bouquets >= m;
}

// Binary search to find the minimum possible max flower size
int minDayToMakeBouquets(vector<int>& flowers, int m, int k) {
    int mx = *max_element(flowers.begin(), flowers.end());
    int mn = *min_element(flowers.begin(), flowers.end());
    int lo = mn;
    int hi = mx;
    int ans = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (isPossible(flowers, mid, m, k)) {
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
    vector<int> flowers(n);
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }

    int m = 3; // Number of bouquets
    int k = 2; // Flowers per bouquet

    int result = minDayToMakeBouquets(flowers, m, k);
    cout << result << endl;

    return 0;
}
