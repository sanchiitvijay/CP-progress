#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,e;
    cin>>n>>s>>e;
    int arr[n+1];
    arr[0] = -1;
    for(int i = 1; i<=n; i++) {
        cin>>arr[i];
    }
    int cnt = 0;
    unordered_map<int, bool> vis;
    vis[s] = true;
    while(s != e) {
        s = arr[s];
        if(vis[s]) {
            cout<<-1<<endl;
            return 0;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}