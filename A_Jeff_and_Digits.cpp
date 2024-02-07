#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int five = 0, zero = 0;
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        if(tmp == 5) five++;
        else zero++;
    }
    if(five < 9 && zero == 0) cout<<-1<<endl;
    else if(five < 9) cout<<0<<endl;
    else if(zero == 0) {
        cout<<-1<<endl;
    }
    else {
        five = five - five%9;
        string ans = "";
        for(int i = 0; i<five; i++) {
            ans += '5';
        }
        for(int i = 0; i<zero; i++) {
            ans += '0';
        }
        cout<<ans<<endl;
    }
    return 0;
}