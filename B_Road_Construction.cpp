#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m;
    int arr[n] = {0};
    while(m--) {
        cin>>a>>b;
        arr[a-1]++;
        arr[b-1]++;
    }
    int num;
    for(int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            num = i+1;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i = 0; i<n; i++) {
        if(i != num-1)
            cout<<num<<" "<<(i+1)<<endl;
    }
    return 0;
}