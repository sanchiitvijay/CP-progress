#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int maxi = max(m,n);
    int cnt = 0;
    for(int i = 0; i<=maxi; i++) {
        for(int j = 0; j<=maxi; j++) {
            if(i*i + j == n && j*j + i == m) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}