#include <bits/stdc++.h>
using namespace std;

// Function to find the first index with value >= x in a sorted array
int lowerbound(vector<int>& num, int x) {
    int lo = 0, hi = num.size() - 1, ans = num.size();
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

// Function to find the index of the row with maximum number of 1s
int rowwithmx1(vector<vector<int>>& v, int r, int c) {
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < r; i++) {
        int cnt1 = c - lowerbound(v[i], 1);  // Number of 1s in the row
        if (cnt1 > maxCount) {
            maxCount = cnt1;
            index = i;
        }
    }
    return index;
}

int main() {
    int n = 5, m = 5;
    vector<vector<int>> v(n, vector<int>(m));
    
    // Input: Each row must be sorted (0s followed by 1s)
    cout << "Enter the 5x5 matrix (each row must be sorted):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    int res = rowwithmx1(v, n, m);
    cout << "Row with maximum 1s is at index: " << res << endl;

    return 0;
}
