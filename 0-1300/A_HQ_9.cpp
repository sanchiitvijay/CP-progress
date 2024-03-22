#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = true;
    for(int i = 0; i<s.size() && flag; i++) {
        if(s[i] == 'H' || s[i] == 'Q' ||s[i] == '9') {
            flag = false;
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}