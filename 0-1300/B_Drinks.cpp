#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    double ans = 0;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        ans += arr[i];
    }
    cout<<ans/n<<endl;

    return 0;
}