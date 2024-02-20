#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a > n ){
        cout<<0<<endl;
        return 0;
    }
    n = n-a;
    if(n > b ) {
        cout<<b+1<<endl;
    }
    else cout<<n<<endl;
    return 0;
}