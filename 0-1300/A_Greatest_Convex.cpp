#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        long long n;
        cin>>n;
        long long a=1,b=1;
        long long ans = -1;
        for(long long i = 2; i<n; i++) {
            a = b;
            b = a*i;
            if((a+b) % n == 0) {
                ans = max(i, ans);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}