#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> prime(50, -1);
    for(int i = 2; i<=50; i++) {
        if(prime[i-1] == -1) {
            prime[i-1] = 1;
            for(int j = 2; j*i<=50; j++){
                prime[i*j-1] = 0;
            }
        }
    }
    if(prime[m-1] == 0 || prime[n-1] == 0) cout<<"NO"<<endl;
    else {
        for(int i = m+1; i<n; i++) {
            if(prime[i-1] == 1) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}