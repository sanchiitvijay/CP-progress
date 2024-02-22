#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int one=0;
    int two=0;
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        if(tmp == 100) one++;
        else two++;
    }
    if(one&1 || (one == 0 && two&1)) {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}