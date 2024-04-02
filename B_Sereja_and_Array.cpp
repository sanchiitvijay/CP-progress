#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    int add = 0;
    for(int i = 0; i<m; i++) {
        int x;
        cin>>x;
        if(x == 1) {
            int a,b;
            cin>>a>>b;
            arr[a-1] = b-add;
        }
        else if(x == 2) {
            int y;
            cin>>y;
            add += y;
        }
        else {
            int y;
            cin>>y;
            cout<<arr[y-1]+add<<endl;
        }
    }
    return 0;
}