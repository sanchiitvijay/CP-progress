#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    long long int arr2[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        arr2[arr[i]-1] = i;
    }
    long long int x=0, y=0;
    long long int b;
    cin>>b;
    while(b--) {
        long long int val;
        cin>>val;
        x += arr2[val-1] + 1;
        y += n - arr2[val-1];
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}