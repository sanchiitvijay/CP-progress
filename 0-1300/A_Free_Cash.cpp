#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    map<pair<int, int>, int> mp;
    while(n--) {
        cin>>a>>b;
        mp[{a,b}]++;
    }
    int ans = 1;
    for(auto i: mp) {
        ans = max(i.second, ans);
    }
    cout<<ans<<endl;
    return 0;
}