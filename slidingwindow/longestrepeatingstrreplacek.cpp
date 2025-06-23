#include <bits/stdc++.h>
using namespace std;

int longestrepstrcanrepbyk(string s,int k) {
    int n = s.size();
    int l = 0, r = 0;
    int mxlen = 0;int mxfreq=0;
    vector<int> hash(26, 0);  // ASCII character map

    while (r < n) {
         hash[s[r]-'A']++;
        mxfreq=max(mxfreq,hash[s[r]-'A']);
        if((r-l+1)-mxfreq>k){
            hash[s[l]-'A']--;
            mxfreq=0;
            // for(int i=0;i<n;i++){
            //     mxfreq=max(mxfreq,hash[s[l]-'A']);
            // }
            l++;
        }
        mxlen = max(mxlen, r - l + 1);
        r++;
    }
    return mxlen;
}

int main() {
    string s;
    cin >> s;
    int x = longestrepstrcanrepbyk(s,3);
    cout << x << endl;
    return 0;
}
