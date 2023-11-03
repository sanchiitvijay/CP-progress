#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int a,b;
        cin>>a>>b;

        int temp = (a+b)/4;

        int chck = min(a,b);

        if(chck<temp) cout<<chck<<endl;
        else cout<<temp<<endl;
    }
    return 0;
}