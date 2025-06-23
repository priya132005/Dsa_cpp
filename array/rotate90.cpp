#include<bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>>&nums){
    int n=nums.size();
    int m=nums[0].size();
    vector<vector<int>>ans(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             ans[i][j]=nums[j][i];
        }
    }
    for(int i=0;i<m;i++){
       
            reverse(ans[i].begin(),ans[i].end());
        
    }
nums=ans;
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
    rotate90(nums);
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << nums[i][j] << " ";
    }
    cout << "\n"; // move to next line after printing each row
}

    
}