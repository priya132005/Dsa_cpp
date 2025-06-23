#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int>& num) {
    int n=num.size();
   int lo=0;int mid=0;int high=n-1;
   while(mid<=high){
    if(num[mid]==0){swap(num[lo],num[mid]);
    lo++;
mid++;}
else if(num[mid]==1)mid++;
else{
    swap(num[mid],num[high]);
    high--;
}

   }

}

int main() {
    int n = 9;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    sort012(ans);
    for (int i = 0; i < n; i++) {
        cout<< ans[i];
    }
    return 0;
}
