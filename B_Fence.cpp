#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = INT_MAX;
    int index = 1;
    int sum = 0;
    for(int i = 0; i<k; i++) {
        sum += arr[i];
    }
    ans = sum;
    // cout<<sum<<endl;
    for(int i = k; i<n; i++) {
        sum += arr[i];
        sum -= arr[i-k];
        // cout<<sum<<endl;
        if(ans > sum && sum != 0) {
            ans = sum;
            index = i-k+2;
        }
    }
    cout<<index<<endl;
    return 0;
}