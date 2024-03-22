#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool flag = 1;
        for(int i = n-1; i>0; i--) {
            if(arr[i]-arr[i-1] >1) {
                flag = 0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}