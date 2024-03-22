#include<bits/stdc++.h>
using namespace std;

void solve(string s, int &k, int &n, int index, int sum , int &ans) {
    if(index >= k) {
        ans = min(ans,sum);
        return ;
    }

    for(int i = 0; i<n; i++) {
        if(s[index + i ] == 'B') {
            sum++;
            solve(s, k, n, index+i+n, sum, ans);
        }

        else if(index + i == k) {
            ans = min(ans,sum);
            return ;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--) {
        int k,n;
        cin>>k>>n;

        string s;
        cin>>s;

        int sum = 0;
        int ans = INT_MAX;

        solve(s, k, n, 0, sum, ans);

        if (ans == INT_MAX) ans = 0; 
        cout<<ans<<endl;

    }
    return 0;
}