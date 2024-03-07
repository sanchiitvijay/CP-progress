#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n*m];
    cin>>arr[0];
    for(int i = 1; i<n*m; i++) {
        cin>>arr[i];
        if((arr[i-1]-arr[i])%d != 0) {
            cout<<-1<<endl;
            return 0;
        }
    }

    sort(arr, arr+(n*m));

    int num = arr[(n*m)/2];
    int cnt = 0;
    
    for(int i = 0; i<n*m; i++) {
        
        cnt += abs((num-arr[i]))/d;
    }
    cout<<cnt<<endl;

    return 0;
}