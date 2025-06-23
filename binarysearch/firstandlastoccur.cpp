#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>& num, int x) {
    int n = num.size();
    int lo = 0;
    int hi = n - 1;
    int ans = n; // Default to n if no element >= x

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (num[mid] >= x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}
int upperbound(vector<int>& num, int x) {
    int n = num.size();
    int lo = 0;
    int hi = n - 1;
    int ans = n; // Default to n if no element >= x

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (num[mid] > x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}
vector<int> firstandlastoccur(vector<int>&ans,int x){
int index = lowerbound(ans, x);
     int ind = upperbound(ans, x);
     if(index==ans.size() || ans[index]!=x)return {-1,-1};
     return {index,ind-1};

}
int main() {
    int n = 5;
    vector<int> ans(n);
    cout << "Enter 5 elements (sorted or unsorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end()); // Ensure the vector is sorted

    int x = 4;
vector<int>res=firstandlastoccur(ans,x);

for(auto it:res){
    cout<<it<<" ";
    
}
  int countoccurx=res[1]-res[0];
  cout<<countoccurx+1<<endl; 
    return 0;
}
