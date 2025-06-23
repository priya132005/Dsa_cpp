#include <bits/stdc++.h>
using namespace std;

// Function to search target t in a 2D matrix
bool searchin2d(vector<vector<int>>& num, int t) {
    int n = num.size();
    int m = num[0].size();
    int lo = 0;
    int hi = m * n - 1;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int r = mid / m; // correct calculation
        int c = mid % m;

        if (num[r][c] == t)
            return true;
        else if (num[r][c] > t)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    return false;
}

int main() {
    int n = 5, m = 5;
    vector<vector<int>> v(n, vector<int>(m));
    
    cout << "Enter the 5x5 matrix (sorted row-wise and column-wise):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    int target = 6;
    if (searchin2d(v, target))
        cout << "Element " << target << " found in matrix.\n";
    else
        cout << "Element " << target << " not found in matrix.\n";

    return 0;
}
