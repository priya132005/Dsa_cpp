#include <bits/stdc++.h>
using namespace std;

string minsubarrwin(string s, string k) {
    int n = s.size(), m = k.size();
    int l = 0, r = 0;
    int mxlen = INT_MAX, sind = -1;
    vector<int> hash(256, 0); // frequency map for characters in k

    // Step 1: Fill the hash with characters in k
    for (int i = 0; i < m; i++) {
        hash[k[i]]++;
    }

    int count = m; // Total characters to match

    while (r < n) {
        // If character at r is part of k
        if (hash[s[r]] > 0)
            count--;

        // Reduce frequency in hash whether it's useful or not
        hash[s[r]]--;
        r++;

        // When all characters matched
        while (count == 0) {
            if (r - l < mxlen) {
                mxlen = r - l;
                sind = l;
            }

            // Move left pointer to shrink window
            hash[s[l]]++;

            // If the character at l is useful (now needed again)
            if (hash[s[l]] > 0)
                count++;

            l++;
        }
    }

    return (sind == -1) ? "" : s.substr(sind, mxlen);
}
int main(){
    string s;
    cin>>s;
    string k;
    cin>>k;
    string x=minsubarrwin(s,k);
    cout<<x<<endl;
    return 0;
}
