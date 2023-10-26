#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    k = 240-k;
    int i = 0;
    int ans= 0;
    while(n != 0) {
        i += 5;
        k -= i;
        n--;
        if(k < 0)
            break;
        ans++;
        
    }
    cout<<ans<<endl;
    return 0;
}