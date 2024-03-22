#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int maxind = 0;
    int minind = 0;
    for(int i = 1; i<n; i++) {
        if(arr[maxind] < arr[i]) {
            maxind = i;
        }
        if(arr[minind] >= arr[i]) {
            minind = i;
        }
    }

    int ans = n - 1 - minind + maxind;
    if(maxind > minind) ans--;
    cout<<ans<<endl;
    return 0;
}