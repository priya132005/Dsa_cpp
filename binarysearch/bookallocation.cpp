#include <bits/stdc++.h>
using namespace std;

// Check if it is possible to allocate books such that no student gets more than 'maxPages'
bool isPossible(vector<int>& num, int m, int maxPages) {
    int count = 1;
    int pages = 0;

    for (int i = 0; i < num.size(); i++) {
        if (num[i] > maxPages) return false;

        if (pages + num[i] <= maxPages) {
            pages += num[i];
        } else {
            count++;
            pages = num[i];
        }
    }

    return count <= m;
}

// Binary Search to find the minimum value of the maximum pages
int minPages(vector<int>& num, int m) {
    int sum = accumulate(num.begin(), num.end(), 0);
    int maxEle = *max_element(num.begin(), num.end());

    int low = maxEle;
    int high = sum;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(num, m, mid)) {
            ans = mid;      // Valid solution, try to find a smaller one
            high = mid - 1;
        } else {
            low = mid + 1;  // Not possible, need to increase pages
        }
    }

    return ans;
}

int main() {
    int n = 7;
    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int m = 3; // Number of students/partitions

    int result = minPages(num, m);
    cout << result << endl;

    return 0;
}
