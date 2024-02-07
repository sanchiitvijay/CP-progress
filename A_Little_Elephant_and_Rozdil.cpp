#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int ind= 0 ;
    bool flag = false;
    for(int i = 1; i<n; i++) {
        if(arr[ind] == arr[i]) flag = true;
        else if(arr[ind] > arr[i]) {
            ind = i;
            flag = false;
        }
    }
    if(flag) cout<<"Still Rozdil"<<endl;
    else cout<<ind+1<<endl;
    return 0;
}