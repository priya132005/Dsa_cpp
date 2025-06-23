#include <bits/stdc++.h>
using namespace std;

int longestnonrepstr(string s) {
    int n = s.size();
    int l = 0, r = 0;
    int mxlen = 0;
    vector<int> hash(256, -1);  // ASCII character map

    while (r < n) {
        if (hash[s[r]] >= l) {
            l = hash[s[r]] + 1;  // move left pointer after the previous occurrence
        }
        hash[s[r]] = r;  // update last seen index
        mxlen = max(mxlen, r - l + 1);
        r++;
    }
    return mxlen;
}

int main() {
    string s;
    cin >> s;
    int x = longestnonrepstr(s);
    cout << x << endl;
    return 0;
}
