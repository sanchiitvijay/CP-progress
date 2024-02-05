#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = -1;
    int old = 0;
    while(n--) {
        int x, y;
        cin>>x>>y;
        old += y - x;
        ans = max(ans, old);
    }
    cout<<ans<<endl;
    return 0;
}