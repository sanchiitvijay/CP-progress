#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    long long int pos;
    cin>>n>>pos;
    long long int newn = n&1 ? n/2+1 : n/2;
    long long int ans = newn >= pos ? pos*2-1 : (pos - newn)*2;
    cout<<ans<<endl;
    return 0;
}