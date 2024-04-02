#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int cnt = 0, two = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] == i) cnt++;
        else if(arr[arr[i]] == i) two = 1;
    }
    // cout<<cnt<<endl;
    if(cnt == n) cout<<n<<endl;
    else if(two == 1) cout<<cnt+2<<endl;
    else cout<<cnt+1<<endl;
    return 0;
}