#include <bits/stdc++.h>
using namespace std;

int numofstr(string s) {
    int n = s.size();
    vector<int>hash(3,-1);
    int cnt=0;
    for(int i =0;i<n;i++){
        hash[s[i]-'a']=i;
        if(hash[0]!=-1 and hash[1]!=-1 and hash[2]!=-1){
            cnt+=1+min({hash[0],hash[1],hash[2]});
        }
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    int x = numofstr(s);
    cout << x << endl;
    return 0;
}
