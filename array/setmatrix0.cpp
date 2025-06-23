#include<bits/stdc++.h>
using namespace std;
void setmatrix0(vector<vector<int>>&nums){
    int n=nums.size();
    int m=nums[0].size();
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]==0){
                row[i]=-1;
                col[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==-1 || col[j]==-1){
                nums[i][j]=0;
            }
        }
    }
return;
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
    setmatrix0(nums);
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << nums[i][j] << " ";
    }
    cout << "\n"; // move to next line after printing each row
}

    
}