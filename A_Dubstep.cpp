#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = true;
    string ans = "";
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if(flag)
                ans += ' ';
            flag = false;
            i+=2;
        }
        else {
            ans += s[i];
            flag = true;
        }
    }
    cout<<ans<<endl;
    return 0;
}