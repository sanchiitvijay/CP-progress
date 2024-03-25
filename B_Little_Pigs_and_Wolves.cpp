#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i = 0; i<n ;i++) {
        for(int j = 0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(arr[i][j] == 'W') {
                if(i>0 && arr[i-1][j] == 'P') {
                    arr[i-1][j] = '.';
                    cnt++;
                }
                else if(j>0 && arr[i][j-1] == 'P') {
                    arr[i][j-1] = '.';
                    cnt++;
                }
                else if(i<n-1 && arr[i+1][j] == 'P') {
                    arr[i+1][j] = '.';
                    cnt++;
                }
                else if(j<m-1 && arr[i][j+1] == 'P') {
                    arr[i][j+1] = '.';
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}