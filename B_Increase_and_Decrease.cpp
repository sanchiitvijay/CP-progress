#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0,tmp;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>tmp;
        cnt += tmp;
    }
    
    int ans = (cnt%n == 0 )?n: n-1;
    cout<<ans<<endl;

    return 0;
}