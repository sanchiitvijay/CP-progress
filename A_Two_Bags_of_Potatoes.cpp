#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    bool flag = true;
    int i = 1;
    for(; i+y<=n; i++) {
        if((i+y)%k == 0) {
            flag = false;
            break;
        }
    }
    for(; i+y<=n; i+=k) {
        cout<<i<<" ";
    }
    if(flag) cout<<-1<<endl;
    return 0;
}