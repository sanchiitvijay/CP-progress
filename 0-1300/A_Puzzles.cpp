#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0; i<m; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    int i = 0, j = n-1;
    int ans = INT_MAX;
    while(j < m) {
        if(arr[j] - arr[i] < ans) ans = arr[j] - arr[i];
        i++;j++;
    }
    cout<<ans<<endl;
    return 0;
}