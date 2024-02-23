#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        mp[tmp]++;
    }

    for(auto i : mp) {
        if(!(n&1) && i.second > n/2) {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(n&1 && i.second > n/2+1) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}