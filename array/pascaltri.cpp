#include <bits/stdc++.h>
using namespace std;

vector<int> pascaltri(int r) {
    vector<int> ans;
    ans.push_back(1);
    long long a = 1;
    for (int c = 1; c <= r; c++) {
        a = a * (r - c + 1);
        a = a / c;
        ans.push_back(a);
    }
    return ans;
}

int main() {
    int n = 5;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(pascaltri(i));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
