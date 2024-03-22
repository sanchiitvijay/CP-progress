#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        long long n;
        cin>>n;
        long long sum = n;
        while(n!=1) {
            if(n&1) {
                n = (n-1)/2;
            }
            else {
                n = n/2;
            }
            sum+=n;
        }
        cout<<sum<<endl;
    }

    return 0;
}