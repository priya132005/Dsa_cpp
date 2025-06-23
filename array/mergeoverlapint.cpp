#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countsubarr(vector<vector<int>>& num) {
    int n = num.size();
    if (n == 0) return {};

    // Sort intervals by start time
    sort(num.begin(), num.end());

    vector<vector<int>> ans;
    ans.push_back(num[0]);

    for (int i = 1; i < n; i++) {
        if (ans.back()[1] < num[i][0]) {
            ans.push_back(num[i]);
        } else {
            // Overlapping intervals, merge them
            ans.back()[1] = max(ans.back()[1], num[i][1]);
        }
    }
    return ans;
}

int main() {
    int n = 5;
    vector<vector<int>> num(n, vector<int>(2));
    
    cout << "Enter " << n << " intervals (start and end):\n";
    for (int i = 0; i < n; i++) {
        cin >> num[i][0] >> num[i][1];
    }

    vector<vector<int>> ans = countsubarr(num);

    cout << "Merged intervals:\n";
    for (auto &interval : ans) {
        cout << interval[0] << " " << interval[1] << "\n";
    }

    return 0;
}
