#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,g;
    cin>>b>>g;
    string ans = "";
    if(b>g) {
        while(b>0 && g>0) {
            ans += 'B';
            ans += 'G';
            b--;
            g--;
        }
        while(b>0) {
            ans += 'B';
            b--;
        }
    }

    else {
        while(b>0 && g>0) {
            ans += 'G';
            ans += 'B';
            b--;
            g--;
        }
        while(g>0) {
            ans += 'G';
            g--;
        }
    }
    cout<<ans<<endl;

    return 0;
}