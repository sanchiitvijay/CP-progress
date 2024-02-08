#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i = 0; i<n; i++) {
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i = 0; i<m; i++) {
        cin>>arr2[i];
    }
    int rat = -1;
    int cnt = 1;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(arr2[j] == (arr2[j]/arr1[i])*arr1[i]) {
                if(rat < arr2[j]/arr1[i]) {
                    cnt = 1;
                    rat = arr2[j]/arr1[i];
                }
                else if(rat == arr2[j]/arr1[i]) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}