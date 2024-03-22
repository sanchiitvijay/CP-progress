#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++) {
        cin>>arr[i];
    }
    int maxi = arr[0];
    int mini = arr[0];
    int ans = 0;
    for(int i = 1; i<n; i++) {
        if(arr[i] > maxi) {
            ans++;
            maxi = arr[i];
        }
        else if(arr[i] < mini) {
            ans++;
            mini = arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}