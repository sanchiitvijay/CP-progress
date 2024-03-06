#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int checker[n]={0};
    int cnt = 0,tmp;
    unordered_map<int, bool> mp;
    for(int i = n-1; i>=0; i--) {
        if(!mp[arr[i]]) {
            cnt++;
            mp[arr[i]] = true;
        }

        checker[i] = cnt;
    }

    for(int i = 0; i<m; i++) {
        cin>>tmp;
        cout<<checker[tmp-1]<<endl;
    }

    return 0;
}