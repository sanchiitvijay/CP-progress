#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int ans = 0;
    int i = 0;
    while(arr[i] != 0 && arr[i] >= arr[k-1] && i<n) {
        ans++;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}