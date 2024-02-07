#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    arr[0] = 0;
    for(int i = 1; i<n; i++) {
        cin>>arr[i];
        arr[i] = (arr[i]-1)/(i+1) + 1;
    }
    long long int ans = 0;
    long long int lar = 0;
    for(int i = 1; i<=m; i++) {
        if(arr[lar] <= arr[i]) lar = i;
    }
    ans = n*(arr[lar]-1) + m-1;
    cout<<ans<<endl;
    return 0;
}