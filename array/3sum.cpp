#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sum3(vector<int>& num) {
    vector<vector<int>> ans;
    int n = num.size();
    sort(num.begin(), num.end());

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate values for the first element
        if (i > 0 && num[i] == num[i - 1]) continue;

        int j = i + 1, k = n - 1;

        while (j < k) {
            int sum = num[i] + num[j] + num[k];
            if (sum == 0) {
                ans.push_back({num[i], num[j], num[k]});
                j++;
                k--;
                // Skip duplicates for the second and third elements
                while (j < k && num[j] == num[j - 1]) j++;
                while (j < k && num[k] == num[k + 1]) k--;
            } else if (sum < 0) {
                j++;
            } else {
                k--;
            }
        }
    }
    return ans;
}

int main() {
    int n = 8;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<vector<int>> ans = sum3(num);

    for (auto &triplet : ans) {
        for (int val : triplet) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
