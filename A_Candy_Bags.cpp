#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,cnt = 1;
    int arr[n][n] = {0};
    for(i = 0; i<n; i++) {
        for(j = 0; j<n; j++) {
            arr[j][i] = cnt++;
        }
        i++;
        for(j = n-1; j>=0; j--) {
            arr[j][i] = cnt++;
        }
    }
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}