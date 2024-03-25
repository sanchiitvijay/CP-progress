#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    if(n == 1) {
        cout<<1<<endl;
        return 0;
    }
    int cnt = 2;
    int ans = 2;
    for(int i = 2; i<n; i++) {
        if(arr[i-2] + arr[i-1] == arr[i]) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 2;
        }
    }
    ans = max(ans, cnt);
    cout<<ans<<endl;
    return 0;
}