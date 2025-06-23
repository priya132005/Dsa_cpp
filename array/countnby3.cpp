#include <bits/stdc++.h>
using namespace std;

vector<int> countby3(vector<int>& num) {
    int n = num.size();
    int el1 = INT_MIN, el2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (el1 == num[i]) {
            cnt1++;
        } else if (el2 == num[i]) {
            cnt2++;
        } else if (cnt1 == 0) {
            el1 = num[i];
            cnt1 = 1;
        } else if (cnt2 == 0) {
            el2 = num[i];
            cnt2 = 1;
        } else {
            cnt1--;
            cnt2--;
        }
    }

    // Count actual occurrences
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == el1) cnt1++;
        else if (num[i] == el2) cnt2++; // use else-if to avoid double counting if el1 == el2
    }

    vector<int> ls;
    int threshold = n / 3;
    if (cnt1 > threshold) ls.push_back(el1);
    if (cnt2 > threshold) ls.push_back(el2);
    
    return ls;
}

int main() {
    int n = 7;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    vector<int> ls = countby3(ans);
    for (int val : ls) {
        cout << val << " ";
    }

    return 0;
}
