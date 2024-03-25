#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], neg=0, pos=0;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        if(arr[i] > 0) pos++;
        else neg++;
    }

    sort(arr, arr+n);
        // for(int i = 0; i<n; i++) {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    if(pos == 0 || neg == 0) {
        reverse(arr, arr+n);
        int l = 1, r = n-2;
        while(l<r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        for(int i = 0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }
    else {
        swap(arr[0], arr[n-1]);
        for(int i = 0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}