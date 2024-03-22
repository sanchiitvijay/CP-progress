#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    k--;
    map<int,int> mp;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int cnt = 0;
    if(mp[arr[0]] == n) {
        cout<<cnt<<endl;
        return 0;
    }

    int j = 0;
    for(int i = 0; i<n; i++) {
        mp[arr[j]]--;
        j++;
        mp[arr[k]]++;
        cnt++;
        k++;
        if(k == n) k--;
        // cout<<"j: "<<j<<"   k: "<<k<<endl;
        // cout<<mp[arr[n-1]]<<endl;
        if(mp[arr[n-1]] == n) {
            cout<<cnt<<endl;
            return 0;
        }
    }

    if(mp[arr[n-1]] == n) {
        cout<<cnt<<endl;
        return 0;
    }

    cout<<-1<<endl;
    return 0;
}