#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string ,int> mp;
    int cnt = 0;
    string ans = "";
    while(n--) {
        string tmp;
        cin>>tmp;
        mp[tmp]++;
        if(mp[tmp]> cnt) {
            cnt = mp[tmp];
            ans = tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}