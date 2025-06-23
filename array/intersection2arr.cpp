#include <bits/stdc++.h>
using namespace std;

vector<int>union2arr(vector<int>& ans, vector<int>& ans1) {
    int n = ans.size(), m = ans1.size();
    vector<int> res;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if(ans[i]>ans1[j]){j++;
        }
        else if(ans[i]<ans1[j])i++;
        else{
            res.push_back(ans[i]);
            i++;
            j++;
        }
    }

    return res;
}

int main() {
    int n = 5, m = 7;
    vector<int> ans(n), ans1(m);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> ans1[i];
    }

    vector<int> res = union2arr(ans, ans1);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
