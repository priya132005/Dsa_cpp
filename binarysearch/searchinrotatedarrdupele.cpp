#include <bits/stdc++.h>
using namespace std;

bool searchInRotatedArrWithDupe(vector<int>& nums, int k) {
    int n = nums.size();
    int lo = 0;
    int hi = n - 1;
    
    while (lo <= hi) {
        int mid = (lo + hi) / 2;

        if (nums[mid] == k) return true;

        // If duplicates are at the ends, skip them
        if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
            lo++;
            hi--;
        }
        // Left part is sorted
        else if (nums[lo] <= nums[mid]) {
            if (nums[lo] <= k && k < nums[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        // Right part is sorted
        else {
            if (nums[mid] < k && k <= nums[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    int n = 9;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    if (searchInRotatedArrWithDupe(ans, 6)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
