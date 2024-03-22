#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool arr[n] = {false};
    int p;
    cin>>p;
    for(int i = 0; i<p; i++) {
        int n;
        cin>>n;
        arr[n-1] = 1;
    }
    int q;
    cin>>q;
    for(int i = 0; i<q; i++) {
        int n;
        cin>>n;
        arr[n-1] = 1;
    }
    bool flag = 1;
    for(int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            flag = 0;
            break;
        }
    }

    if(flag) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}