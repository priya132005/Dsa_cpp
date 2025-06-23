#include<bits/stdc++.h>
using namespace std;
vector<int> spiralmat(vector<vector<int>>& num) {
    int t = 0;
    int b = num.size() - 1;
    int l = 0;
    int r = num[0].size() - 1;
    vector<int> ans;

    while (t <= b && l <= r) {
        // Left to right (top row)
        for (int i = l; i <= r; i++) {
            ans.push_back(num[t][i]);
        }
        t++;

        // Top to bottom (right column)
        for (int i = t; i <= b; i++) {
            ans.push_back(num[i][r]);
        }
        r--;

        // Right to left (bottom row)
        if (t <= b) {
            for (int i = r; i >= l; i--) {
                ans.push_back(num[b][i]);
            }
            b--;
        }

        // Bottom to top (left column)
        if (l <= r) {
            for (int i = b; i >= t; i--) {
                ans.push_back(num[i][l]);
            }
            l++;
        }
    }

    return ans;
}

int main(){
    int n=3;
    int m=3;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }
    vector<int>ans=spiralmat(nums);
    for (int i = 0; i < ans.size(); i++) {
    cout<<ans[i]<<" ";
     // move to next line after printing each row
}

    
}