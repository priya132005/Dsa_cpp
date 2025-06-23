#include <bits/stdc++.h>
using namespace std;

bool sortnum(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] > nums[i]) return false; // not sorted
    }
    return true; // sorted
}

int main() {
    int n = 9;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    if (sortnum(ans))
        cout << "The array is sorted in non-decreasing order." << endl;
    else
        cout << "The array is NOT sorted in non-decreasing order." << endl;

    return 0;
}
