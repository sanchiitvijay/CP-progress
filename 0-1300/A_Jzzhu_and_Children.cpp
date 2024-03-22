#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        arr[i] = (tmp-1)/t;
    }
    int ans = 0;
    for(int i = 1; i<n; i++) {
        if(arr[i] >= arr[ans]){
            ans = i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}