#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n -= 10;
    int ans = 4;
    if(n == 10) ans = 15;
    else if(n > 11 || n <= 0) ans = 0;
    else if(n == 0) ans = 0;
    cout<<ans<<endl;
    return 0;
}