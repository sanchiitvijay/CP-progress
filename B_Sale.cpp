#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    cin>>n>>b;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i = 0; i<b; i++) {
        if(arr[i] > 0) break;
        else ans += arr[i];
    }
    cout<<-ans<<endl;
    return 0;
}