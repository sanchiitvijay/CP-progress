#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,neg=0,zero=0, small = 1000005;
    cin>>n>>k;
    int sum = 0;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        if(arr[i] < 0) neg++;
        if(arr[i] == 0) zero = 1;
        sum += abs(arr[i]);
        small = min(small , abs(arr[i]));
    }
    sort(arr, arr+n);
    if(k<neg) {
        for(int i = k; i<neg; i++) {
            sum += 2*arr[i];
        }
    }
    else if((k-neg)%2 != 0 && zero == 0) {
        sum -= 2*small;
    }
    cout<<sum<<endl;
    return 0;
}