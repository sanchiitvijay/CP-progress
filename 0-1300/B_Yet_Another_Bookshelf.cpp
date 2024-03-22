#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }

        int ans = 0;
        int cnt = 0;
        int i = 0;

        for(; i<n; i++) {
            if(arr[i] == 1) break;
        }

        for(i+1; i<n; i++) {
            if(arr[i] == 1) {
                ans += cnt;
                cnt = 0;
            }
            else cnt++;
        }

        cout<<ans<<endl;
    }
    return 0;
}