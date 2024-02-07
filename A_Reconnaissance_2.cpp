#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    // cout<<"ji"<<endl;
    int x=n-1,y=0;
    for(int i = 0; i<n-1; i++) {
        if(abs(arr[x] - arr[y]) > abs(arr[i] - arr[i+1])) {
            x = i;
            y = i+1;
        }
    }
    cout<<x+1<<" "<<y+1<<endl;
    return 0;
}