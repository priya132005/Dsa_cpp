#include <bits/stdc++.h>
using namespace std;

// Check if we can place 'cow' cows such that the minimum distance between them is at least 'dist'
bool isPossible(vector<int>& stall, int dist, int cow) {
    int n = stall.size();
    int count = 1;  // First cow is always placed at the first stall
    int last_pos = stall[0];

    for (int i = 1; i < n; i++) {
        if (stall[i] - last_pos >= dist) {
            count++;
            last_pos = stall[i];
        }
        if (count >= cow) return true;
    }
    return false;
}

// Binary search to find the largest minimum distance between cows
int maxMinDistance(vector<int>& stall, int cow) {
    sort(stall.begin(), stall.end());

    int low = 0;
    int high = stall.back() - stall[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(stall, mid, cow)) {
            ans = mid;         // mid is a possible solution, try for better (larger)
            low = mid + 1;
        } else {
            high = mid - 1;    // mid is too large, reduce the distance
        }
    }

    return ans;
}

int main() {
    int n = 7;
    vector<int> stall(n);

    for (int i = 0; i < n; i++) {
        cin >> stall[i];
    }

    int m = 3; // Number of cows

    int result = maxMinDistance(stall, m);
    cout << result << endl;

    return 0;
}
