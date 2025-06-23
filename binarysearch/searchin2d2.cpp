#include <bits/stdc++.h>
using namespace std;

// Function to search target t in a 2D matrix
bool searchin2d2(vector<vector<int>>& num, int t) {
    int n = num.size();
    int m = num[0].size();
   int r=0;
   int c=m-1;
   while(r<n and c>=0){
    if(num[r][c]==t)return true;
    else if(num[r][c]>t)c--;
    else r++;

   }

    return false;
}

int main() {
    int n = 3, m = 3;
    vector<vector<int>> v(n, vector<int>(m));
    
    cout << "Enter the 5x5 matrix (sorted row-wise and column-wise):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    int target = 6;
    if (searchin2d2(v, target))
        cout << "Element " << target << " found in matrix.\n";
    else
        cout << "Element " << target << " not found in matrix.\n";

    return 0;
}
